/*Задача: Функция Split. Формулировка задачи: Функция должна вернуть вектор строк, 
полученный разбиением строки str на части по указанному символу-разделителю delimiter. 
Если разделитель встретился в начале или в конце строки str, то в начале (соответственно, в конце) 
вектора с результатом должна быть пустая строка. Если два разделителя встретились рядом, 
то пустая строка между ними тоже должна попасть в ответ. Для пустой строки надо вернуть вектор, содержащий одну пустую строку.
Например, Split("What_is_your_name?", '_') должна вернуть вектор из строк What, is, your и name?.
Задача взята из хендбука Яндекса по С++. По условию int main() не требуется.*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


std::vector<std::string> Split(const std::string& str, char delimiter) {
	size_t k = 0, i = 0;
	for (size_t i = 0; i != str.size(); ++i) {
		if (str[i] == delimiter)
			k++;
	}
	std::vector<std::string> list(k + 1);
	for (size_t j = 0; j != str.size(); ++j) {
		if (str[j] != delimiter)
			list[i].push_back(str[j]);
		else
			i++;
	}
	return list;
}