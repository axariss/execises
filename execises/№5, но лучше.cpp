/*На просторах литкод заинтересовалась другим подходом к данной задаче. 
Увидев идею, решила реализовать её самостоятельно. Данная реализация сокращает 
использование памяти и кажется мне более элегантной :).*/


#include <iostream>
#include <limits>
using namespace std;


int reverse(int x) {
	int x_reversed = 0;
	while (x != 0) {
		if (x_reversed > INT_MAX / 10 || x_reversed < INT_MIN / 10)
			return 0;
		x_reversed = x_reversed * 10 + x % 10;
		x = x / 10;
	}
	return x_reversed;
}

