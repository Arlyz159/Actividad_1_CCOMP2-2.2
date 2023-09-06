#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n3;
	cout << "Ingrese el primer numero: "; cin >> n1;
	cout << "Ingrese el segundo numero: "; cin >> n2;
	cout << "Ingrese el tercer numero: "; cin >> n3;

    if (n1 % n2 == 0) {
		cout << n1 << " es multiplo de " << n2 << endl;
	} else {
		cout << n1 << " no es multiplo de " << n2 << endl;
	}

	if (n3 % n2 == 0) {
		cout << n3 << " es multiplo de " << n2 << endl;
	} else {
		cout << n3 << " no es multiplo de " << n2 << endl;
	}
}