/*Задача: обратное целое число. Формулировка задачи: учитывая 32-битное целое число со знаком x, 
верните x его значение с переставленными цифрами. Если при перестановке x 
значение выходит за пределы 32-битного целого числа со знаком [-2^31, 2^31 - 1], верните 0.
Предположим, что среда не позволяет хранить 64-битные целые числа (со знаком или без знака).
Формат ввода: x = 123.
Формат вывода: 321.
Задача взята с литкода. По условию int main() не требуется.*/


#include <iostream>
#include <string>
using namespace std;


int reverse(int x) {
	int x_r;
	string num, num_r;
	num = to_string(x);
	if (num[0] == 45) {
		num.erase(0, 1);
		num_r.push_back(45);
	}
	for (auto i = num.size(); i != 0; --i) {
		if (num[i - 1] == 48)
			num.erase(i - 1, 1);
		else
			break;
	}
	for (auto i = num.size(); i != 0; --i)
		num_r.push_back(num[i - 1]);
	try {
		x_r = stoi(num_r);
	}
	catch (const std::out_of_range& e) {
		return 0;
	}
	return x_r;
}
