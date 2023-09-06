#include <iostream>

using namespace std;

int main()
{
    double recorrido, costGalon, promedioxgalon, estacionamientoDia, peajeDia;
    cout << "Recorrido por dia: "; cin >> recorrido;
    cout << "Costo de gasolina: "; cin >> costGalon;  
    cout << "Tarifa de estacionamiento por dia: " << endl;  cin >> estacionamientoDia;
    cout << "Peajes por dia: " << endl; cin >> peajeDia;


    promedioxgalon = recorrido*costGalon;
    promedioxgalon = recorrido / promedioxgalon;

    cout << "En peomedio gasta $" << promedioxgalon << " por dia" << endl;
}