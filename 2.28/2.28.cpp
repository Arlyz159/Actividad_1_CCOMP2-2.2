#include <iostream>

using namespace std;

int main()
{
    int g=0;
    while (g < 1000) {
        cout << "Ingrese un numero de 4 cifras: "; cin >> g;
    }
    cout << g % 10 << " " << (g % 100) / 10 << " " << (g % 1000) / 100 << " " << g/1000 << endl << endl;
}