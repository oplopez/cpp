#include <iostream>
int main(int argc, char** argv) {
	using namespace std;
	double subtotal;
    double total;
    double impuesto = 0.15;
    int descuento;
    double calculoDescuento;
    double calculoImpuesto;

    cout << "Ingrese el subtotal de la factura:";
    cin >> subtotal;
    
    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;
    
    calculoDescuento = (subtotal * descuento) / 100;
    calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
    total = subtotal - calculoDescuento + calculoImpuesto;

    cout << endl;
    cout << "Total a pagar es: " << total;
    
}

