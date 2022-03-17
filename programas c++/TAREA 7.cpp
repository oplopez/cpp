#include <iostream>
#include "todo.h"

using namespace std;

double subtotal = 0;
double impuesto = 0.15;
double total = 0;
string  listaproductos;

void agregarproducto(string descripcion, int cantidad, double precio)
{
    subtotal = subtotal  + (cantidad * precio);
    listaproductos = listaproductos + descripcion + '\n';
    total = subtotal + (subtotal * 0.15);
}

void imprimirfactura()
{
    system("cls");
    cout << "****" << endl;
    cout << "factura" << endl;
    cout << "***" << endl;
    cout << endl;

    cout << "productos: " << endl;
    cout << listaproductos; 

    
    cout << endl;
    cout << "subtotal: " << subtotal;  
    cout << endl; 
    cout << endl; 
    system("pause");

     cout << endl;
    cout << "total: " << total;  
    cout << endl; 
    cout << endl; 
    system("pause");
}
#include <iostream>
#include "todo.h"

using namespace std;

void menu();

int main(int argc, char const *argv[]){
    
menu();


    return 0;
}
© 2022 GitHub, Inc.
Terms
#include <iostream>
#include "todo.h"


using namespace std;

void productos(int opcion);
void imprimirfactura();

void menu()
{
          int opcion = 0;
       
 while(true)
 {
   system("cls");
        cout << "***";
     cout << "menu";
     cout << "***";
     cout << endl;
     cout << endl;
    
     cout << "1 - bebidas calientes" << endl;
     cout << "2 - bebidas frias" << endl;
     cout << "3 - reposteria" << endl;
     cout << "4 - imprimir factura" << endl;
     cout << "0 - salir" << endl;

     cin >> opcion;

     if (opcion == 0)
     {
         break;
     }
     if (opcion == 4)
     
     {
       imprimirfactura();
       break;
     } else{
       productos(opcion);
     }
     
  }
}
#include <iostream>
#include "todo.h"

using namespace std;

void agregarproducto(string descripcion, int cantidad, double precio);

                       
void productos(int opcion) 
 { 
 system("cls");
  int opcionproducto = 0;
  switch (opcion)
      {
          case 1:  
            {
           cout << "bebidas calientes" << endl;
            cout << "******" << endl;
           cout << "1 granita - L 25.00" << endl;
           cout << "2 cafe - L 15.00" << endl;
           cout << "5 chocolate caliente - L 35.00" << endl;
           cout << endl;

           cout << "ingrese una opcion: ";
         
           cin >> opcionproducto;
            switch (opcionproducto)
             {
            case 1:
              agregarproducto("1 granita - L 25.00", 1, 25);
              break;
            case 2:
              agregarproducto("1 cafe - L 15.00", 1, 15);
              break;
            case 3:
              agregarproducto("5 chocolate caliente - L 35.00", 1, 35);
              break;  
            default:
            {
             cout << "opcion no valida";
             return;
              break;
              }
            }
              cout << endl; 
             cout << "producto agregado" << endl << endl;
             system("pause");
             break;
          }
          
     case 2:
     {
           cout << "***" << endl;
          cout << "bebidas frias" << endl;
          cout << "***" << endl;
           cout << "1 granita de cafe - L 30.00" << endl;
           cout << "2 coctel - L 15.00" << endl;
           cout << "3 te - L 20.00" << endl;
           cout << endl;

           cout << "ingrese una opcion: ";
         
           cin >> opcionproducto;
            switch (opcionproducto)
            {
            case 1:
              agregarproducto("1 granita de cafe - L 30.00", 1, 30);
              break;
            case 2:
              agregarproducto("1 coctel - L 15.00", 1, 15);
              break;
              case 3:
              agregarproducto("1 te - L 20.00", 1, 20);
              break;
            default:
            {
             cout << "opcion no valida";
             return;
              break;
              }
            }
              cout << endl; 
             cout << "producto agregado" << endl << endl;
             system("pause");
             break;
          }
                    
           break;
           } 
   switch (opcion)       
   
     case 3:
        {
           cout << "***" << endl;
           cout << "reposteria" << endl;
            cout << "***" << endl;
           cout << "1 pastel de chocolate - L 150.00" << endl;
            cout << "2 pay de manzana - L 15.00" << endl;
            cout << "3 brownies - L 15.00" << endl;
            cout << endl;
           cout << "ingrese una opcion: ";
         
           cin >> opcionproducto;
          switch (opcionproducto)
            {
          case 1:
           agregarproducto("1 pastel de chocolate - L 150.00", 1, 150);
            break;
            case 2:
             agregarproducto("1 pay de manzana - L 15.00", 1, 15);
             break;
             case 3:
             agregarproducto("1 brownies - L 15.00", 1, 15);
             break;
            default:
            
            {
           cout << "opcion no valida";
           return;
             break;
            }
            }
             cout << endl; 
             cout << "producto agregado" << endl << endl;
             system("pause");
             break;
          }       
}
