#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
  float dato,raiz;
 
  cout << "Pon un numero para obtener la raiz cuadrada:";
  cin >> dato;
 
  raiz = sqrt(dato);
 
  cout << "La raiz cuadrada de " << dato << " es " << raiz << endl;
 
  return 0;
}
