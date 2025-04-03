/*������: ������� Split. ������������ ������: ������� ������ ������� ������ �����, 
���������� ���������� ������ str �� ����� �� ���������� �������-����������� delimiter. 
���� ����������� ���������� � ������ ��� � ����� ������ str, �� � ������ (��������������, � �����) 
������� � ����������� ������ ���� ������ ������. ���� ��� ����������� ����������� �����, 
�� ������ ������ ����� ���� ���� ������ ������� � �����. ��� ������ ������ ���� ������� ������, ���������� ���� ������ ������.
��������, Split("What_is_your_name?", '_') ������ ������� ������ �� ����� What, is, your � name?.
������ ����� �� �������� ������� �� �++. �� ������� int main() �� ���������.*/


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