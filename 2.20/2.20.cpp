#include <iostream>

using namespace std;

int main()
{
    int num;
	cout << "Ingrese el radio: "; cin >> num;

	cout << "Diametro: " << 2 * num << endl;
	cout << "Circunferencia: " << 2 * 3.14159 * num << endl;
	cout << "Area: " << 3.14159 * num * num << endl << endl;
}