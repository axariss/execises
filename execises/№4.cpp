/*������: ����������. ������������ ������: ���� ������ �� �������� ��������� ���� � ��������. 
���������, �������� �� ��� ����������� ��� ����� ��������.
������ �����: �� ���� �������� ���� ������. � ������ ����� ���� �������. 
������ ����� ���� ������������ ����� ��������. ����� ������ �� ����������� 100.
������ ������: �����������, ��� �� ������ ������� ��� �������. 
���������� ������� YES, ���� ���������� ������ � ���������, � NO � ��������� ������.
������ ����� �� �������� ������� �� �++.*/


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