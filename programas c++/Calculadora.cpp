#include <iostream>
using namespace std;

int main ()

{
	int n, n1, n2, menu, num, y, factorial;
	int total;
	char cont;
	
	do{
	
	cout <<"CALCULADORA\n";
	
	for(float n=1; n<=total; n++){
		
	}
	
	cout<<endl;
	cout<<endl;
	
	cout <<"MENU\n";
	cout <<"1) Sumar \n";
	cout <<"2) Restar \n";
	cout <<"3) Multiplicar \n";
	cout <<"4) Factorial \n";
	
	cout<<endl;
	
	cout <<"Eliga una Opcion: ";
	cin>>menu;
	
	cout<<endl;
	
	switch(menu)
	{
		//OPERACION SUMA
		case 1: 
		cout <<"Ingrese primer numero:\n";
	    cin>>n1;
	    cout <<"Ingrese segundo numero:\n";
	    cin>>n2;
	    
	    total=n1+n2;
	    
		cout <<"El resultado es: "<<total<<endl;
		break;
		
		//OPERACION RESTA
		case 2: 
		cout <<"Ingrese primer numero:\n";
	    cin>>n1;
	    cout <<"Ingrese segundo numero:\n";
	    cin>>n2;
	    
	    total=n1-n2;
	    
	    cout <<"El resultado es: "<<total<<endl;
		break;
		
		//OPERACION MULTIPLICACION
		case 3: 
		cout <<"Ingrese primer numero:\n";
	    cin>>n1;
	    cout <<"Ingrese segundo numero:\n";
	    cin>>n2;
	    
	    total=n1*n2;
	    
	    cout <<"El resultado es: "<<total<<endl;
		break;
		
		//OPERACION FACTORIAL 
		case 4: 
		cout<<"Digite el numero a convertir a factorial:";
		cin>>num;
		
		factorial=1;
		
		for(y=1; y<=num; y++)
		{
			factorial = factorial * y;
		}
		
		cout<<"\nEl factorial de "<<num<<" es "<<factorial;		
		break;
		
		default:
        cout<<"Operacion no valida"<<endl;
		
	}
	cout<<"\n    Desea continuar [s/n]:";
	cin>>cont;
}
while  (cont!='n');
return 0;
}
		


