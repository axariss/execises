/*Задача: общий префикс. Формулировка задачи: напишите функцию для вычисления наибольшего общего префикса строк, 
переданных в векторе words. Например, для пустого вектора функция должна вернуть пустую строку, 
а для вектора из строк "apple", "apricot" и "application" — строку "ap". 
Задача взята из хендбука Яндекса по С++. По условию int main() не требуется.*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


bool compare(const std::string& left, const std::string& right) {
	return left.length() < right.length();
}


std::string CommonPrefix(const std::vector<std::string>& words) {
	size_t j;
	std::string prefix;
	std::vector<std::string> order(words.size());
	for (size_t i = 0; i != words.size(); ++i)
		order[i] = words[i];
	if (order.empty())
		prefix = "";
	else if (order.size() > 1) {
		std::sort(begin(order), end(order), compare);
		for (j = 0; j != order[0].size(); ++j) {
			if (order[0][j] == order[1][j]) {
				prefix.push_back(order[0][j]);
			}
			else
				break;
		}
		for (size_t i = 2; i != order.size() - 1; ++i) {
			for (j = 0; j != prefix.size(); ++j) {
				if (prefix[j] != order[i][j]) {
					prefix = prefix.substr(0, j);
				}
			}
		}
	}
	else
		prefix = order[0];
	return prefix;
}