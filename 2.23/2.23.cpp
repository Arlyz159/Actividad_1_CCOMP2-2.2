#include <iostream>

using namespace std;

int main()
{
	int num_mayor = 0, num_menor = 0, num;
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese un numero: "; cin >> num;

		if (i == 0) num_menor = num;

		if (num > num_mayor) {
					num_mayor = num;
		} if (num_menor > num) {
					num_menor = num;
		}}

	cout << "El numero mayor es: " << num_mayor << endl;
	cout << "El numero menor es: " << num_menor << endl;
}