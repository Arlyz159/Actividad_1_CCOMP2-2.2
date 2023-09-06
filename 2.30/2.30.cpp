#include <iostream>

using namespace std;

int main()
{
    float peso, altura, imc;
    cout << "Peso: "; cin >> peso;
    cout << "Altura: "; cin >> altura;
    imc = peso / (altura * altura);

    if (imc < 18.5) {
        cout << imc << " - Bajo de peso";
    }
    if (imc >= 18.5) {
        cout << imc << " - Peso normal";
    }
    if (imc >= 25) {
        cout << imc << " - Tiene sobrepeso";
    }
    if (imc >= 30) {
        cout << imc << " - Tiene obesidad";
    }
    cout << endl;
}