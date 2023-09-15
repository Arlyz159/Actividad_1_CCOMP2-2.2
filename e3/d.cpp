#include <iostream>

using namespace std;

int main() {

// Ejercicio 1
  int num;
  cout << "Ingrese un número mayor que 2: ";
  cin >> num;

  for(int i{2}; i <= num; i++) {
    if ((i%2 != 0 && i %3 != 0 && i%5 != 0) || (i == 2 || i == 3 || i == 5)) {
      cout << i << " ";
    }
  }

// Ejercicio 2
  int num_2, div = 0;
  cout << "ingrese un numero: "; 

  for(int i{1}; i<num_2; i++) {
      if (num%1==0) div +=1;
  }
  if (num == div) cout << "Es perfecto";
  else cout << "No es perfecto";
  
}
