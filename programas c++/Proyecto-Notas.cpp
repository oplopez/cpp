#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*Declaracion de las variables, la variable op nos ayuda con la eleccion del menu,
	la variable cont es un contador que nos ayuda a iniciar el arreglo desde cero	*/
	int op, cont=0;
	/*Los arreglos tienen un tamano de 100 pero es solo un valor arbitrario, no es necesario ingresa 
	100 valores, solo se ingresaran la cantidad de datos que el usuario desee, siempre y cuando sean menos de 100	*/
	string nom[100], ape[100];
	int mate[100], espa[100], socio[100], cienc[100];
	double prom;
	
	//Ciclo de repeticion do while para poder ejecutar nuestro menu todas las veces que deseemos
	do
	{
		cout<<"Menu"<<endl;
		cout<<"1. Ingresar Nota"<<endl;
		cout<<"2. Ver Notas"<<endl;
		cout<<"0. Salir"<<endl;
		cin>>op;
		
		switch(op)
		{
			case 1:
				//Ingrese de los datos y almacenaje de los mismos
				cout<<"Ingrese el nombre y apellido del alumno: "<<endl;
				cin>>nom[cont]>>ape[cont];
				cout<<"Ingrese el acumulado de la clase de Matematicas: "<<endl;
				cin>>mate[cont];
				cout<<"Ingrese el acumulado de la clase de Espanol: "<<endl;
				cin>>espa[cont];
				cout<<"Ingrese el acumulado de la clase de Sociologia: "<<endl;
				cin>>socio[cont];
				cout<<"Ingrese el acumulado de la clase de Ciencias Naturales: "<<endl;
				cin>>cienc[cont];
				cont++;
				break;
			case 2:
				for(int i=0; i<cont; i++)
				{	
					//Prentacion de los datos anteriormente ingresados
					cout<<"\nAlumno: "<<nom[i]<<" "<<ape[i]<<endl;
					cout<<"Matematicas: "<<mate[i]<<endl;
					cout<<"Espanol: "<<espa[i]<<endl;
					cout<<"Sociologia: "<<socio[i]<<endl;
					cout<<"Ciencias Naturales: "<<cienc[i]<<endl;
					//Calculo del promedio de las clases del alumno
					prom=(mate[i]+espa[i]+socio[i]+cienc[i])/4;
					cout<<"El promedio del Alumno es: "<<prom<<endl;
				}
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
		cout<<endl;
	}
	while(op!=0);
	
	return 0;
}
