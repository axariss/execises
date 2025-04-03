/*Задача: Палиндромы. Формулировка задачи: Дана строка из строчных латинских букв и пробелов. 
Проверьте, является ли она палиндромом без учета пробелов.
Формат ввода: На вход подается одна строка. В строке могут быть пробелы. 
Подряд может идти произвольное число пробелов. Длина строки не превосходит 100.
Формат вывода: Представьте, что из строки удалили все пробелы. 
Необходимо вывести YES, если полученная строка — палиндром, и NO в противном случае.
Задача взята из хендбука Яндекса по С++.*/


#include <iostream>
#include <string>


int main() {
	std::string phrase, palindrome;
	std::getline(std::cin, phrase);
	phrase.erase(std::remove(phrase.begin(), phrase.end(), ' '), phrase.end());
	for (size_t i = phrase.size(); i != 0; --i)
		palindrome.push_back(phrase[i - 1]);
	if (phrase.compare(palindrome) == 0)
		std::cout << "YES";
	else
		std::cout << "NO";
}