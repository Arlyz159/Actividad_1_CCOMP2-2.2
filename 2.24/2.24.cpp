#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	cout << "Ingrese el primer numero: "; cin >> num1;
	cout << "Ingrese el segundo numero: "; cin >> num2;

	if ((num1 + num2) % 2 == 0) {
		cout << "La suma es par";
	} else {
		cout << "La suma es impar" << endl << endl;
	}

    
}