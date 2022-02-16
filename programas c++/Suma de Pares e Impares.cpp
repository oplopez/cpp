#include <iostream>

using namespace std;
int main(int argc , char const *argv[])
{
	int pares=0, impares=0, Suma=0;
	
     for (int i= 1; i <= 10 ; i++)	  
{
	if ( i % 2 == 0) {
		pares = pares + i;
	}
	cout <<i<< "";
	if ( i%2 >0){Suma+=i;
	impares = impares + i;
	}
	
	Suma=pares + impares;
}

cout << endl;
cout << endl;
cout << "Total pares : " << pares;
cout << endl;
cout << "Total Impares : "<< impares ;
cout << endl;
cout << "Total :" << Suma ; 
 return 0;
}
