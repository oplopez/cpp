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
        cout << "3 - Macchiato de caramelo" << endl;
        cout << "4 - Cafe Moca" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
                    
        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("1 Capuccino - L 40.00", 1, 40);
            break;
                        
        case 2:
            agregarProducto ("1 Expresso -  L 30.00", 1, 30);
            break;
                        
        case 3:
            agregarProducto ("1 Macchiato de caramelo -  L 35.00", 1, 35);
            break;
                        
        case 4:
            agregarProducto ("1 Cafe Moca -  L 25.00", 1, 25);
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
        cout << "1 - White Frappe" << endl;
        cout << "2 - Granita" << endl;
        cout << "3 - Frozen Tea" << endl;
        cout << "4 - Malteada Gelato" << endl;
        cout << endl;
        

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("1 White Frappe - L 60.00", 1, 60);
            break;
                        
        case 2:
            agregarProducto ("1 Granita -  L 60.00", 1, 60);
            break;
                        
        case 3:
            agregarProducto ("1 Frozen tea -  L 55.00", 1, 55);
            break;
                        
        case 4:
            agregarProducto ("1 Malteada Gelato -  L 89.00", 1, 89);
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
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - Dona" << endl;
        cout << "2 - Pastel Tres leches" << endl;
        cout << "3 - Pastel chocolate" << endl;
        cout << "4 - Brownis" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
                    
        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("1 Dona - L 25.00", 1, 25);
            break;
                        
        case 2:
            agregarProducto ("1 Pastel Tres leches -  L 70.00", 1, 70);
            break;
        
        case 3:
            agregarProducto ("1 Pastel chocolate - L 75.00", 1, 75);
            break;
        
        case 4:
            agregarProducto ("1 Brownis - L 25.00", 1, 25);
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

    default:
        break;
    }
}
