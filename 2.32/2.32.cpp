#include <iostream>

using namespace std;

int main()
{
    int edad;
    double mhr_tanaka, mhr_gellish, mhr_nes;

    cout << "Ingrese su edad: ";
    cin >> edad;

    mhr_tanaka = 208 - 0.7 * edad;
    mhr_gellish = 207 - 0.7 * edad;
    mhr_nes = 211 - 0.64 * edad;

    cout << "Su frecuencia cardiaca segun Tanaka en 2001 es: MHR " << mhr_tanaka << endl;
    cout << "Su frecuencia cardiaca segun Gellish en 2007 es: MHR " << mhr_gellish << endl;
    cout << "Su frecuencia cardiaca segun Ness en 2012 es: MHR " << mhr_nes << endl;
}