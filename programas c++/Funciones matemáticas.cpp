#include <iostream>
#include <math.h>
#define Pi 3.1416

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double seno = 0;
    double coseno = 0;
    double tangente = 0;
    
    numero = 2 * Pi;
    seno = sin (numero);
    coseno = cos (numero);
    tangente = tan (numero);

    cout << "El numero es:  " << numero << endl;
    cout << "El seno es:  " << seno << endl;
    cout << "El coseno es:  " << coseno << endl;
    cout << "El tangente es:  " << tangente << endl;

    return 0;
}
