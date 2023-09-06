#include <iostream>

using namespace std;

int main()
{
    char x;
    cout << "Ingrese un caracter: "; cin >> x;

    int val = static_cast<int>(x);
    cout << val << endl << endl;
}