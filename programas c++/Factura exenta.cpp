#include <iostream>
#include <cstdlib>

using namespace std;
 
int main(int argc, char* argv[])
{	
    
    cout << "\n\n Calculo del total de una factura con descuento e impuesto :\n";
	cout << "-----------------------------------------------------------\n";
	
	char exentoFact;
	float subtotal;
	int descuento;
	float impuesto;
	float calculoDescuento;
	float calculoImpuesto;
	float total;
	
	cout<<"Ingrese el subtotal de la factura: \n";
	cin>>subtotal;
	
	cout<<"Ingrese el descuento (0, 10, 15, 20): \n";
	cin>>descuento;
	
	cout<<"Es factura excenta? escriba S o N: \n";
	cin>>exentoFact;
	
	impuesto = 0.15;
	
	if(exentoFact == 's' || exentoFact == 'S')
	{
		calculoDescuento = (subtotal * descuento) / 100;
		total = subtotal - calculoDescuento;
	}
	
	else if(exentoFact == 'n' || exentoFact == 'N')
	{
		calculoDescuento = (subtotal * descuento) / 100;
		calculoImpuesto = (subtotal - calculoDescuento) * impuesto;
		total = subtotal - calculoDescuento + calculoImpuesto;
	}
	
	cout << " El total a pagar es "<< total;
	
}
