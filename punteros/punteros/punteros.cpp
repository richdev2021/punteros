#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char a[20];
	char* puntero_a = a;
	cout << "introduce un mensaje de no mas de 20 letras sin espacios" << endl;
	cin >> a;
	for (int i = 0; i < 20; i++) {
		puntero_a = &a[i];
		cout << puntero_a << endl;
		puntero_a = 0;


	}
	return 0;
}		/*if (puntero_a == "a" || puntero_a == "e" || puntero_a == "i" || puntero_a == "o" || puntero_a == "u") {
			b = b + 1;
		}*/
		/*if (puntero_a == "a" || puntero_a == "e" || puntero_a == "i" || puntero_a == "o" || puntero_a == "u") {
			b = b + 1;
		}*/