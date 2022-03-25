#include <iostream>

using namespace std;

double subtotal;
string listaProductos;


void agregarProducto (string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura ()
{
    system ("cls");
    cout << "**********"  << endl; 
    cout << " FACTURA  "  << endl; 
    cout << "**********"  << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout <<  listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    system ("pause");
}
#include <iostream>

using namespace std;

extern void menu ();

int main(int argc, char const *argv[])
{
    menu ();
    

    return 0;
}
#include <iostream>

using namespace std;

extern void productos (int opcion);
extern void imprimirFactura ();

void menu ()
{
    int opcion = 0;

    while (true)
    {
        system ("cls");
        cout << "********";
        cout << "  MENU  ";
        cout << "********";
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "1 -- Bebidas calientes" << endl;
        cout << "2 -- Bebidas frias" << endl;
        cout << "3 -- Reposteria" << endl;
        cout << "4 -- Imprimir factura" << endl;
        cout << "0 -- Salir" << endl;

        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }

        if (opcion == 4)
        {
            imprimirFactura ();
            break;
        } else {
            productos (opcion);
        }

        
    }
}
#include <iostream>

using namespace std;

extern void agregarProducto (string descripcion, int cantidad, double precio);

void productos (int opcion)
{
    system ("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;

        cin >> opcionProducto;
                    
        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("Capuccino", 1, 40);
            break;
                        
        case 2:
            agregarProducto ("Expresso", 1, 30);
            break;
                        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");

        break;
        
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        system ("pause");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        system ("pause");
        break;
    }

    default:
        break;
    }
}
