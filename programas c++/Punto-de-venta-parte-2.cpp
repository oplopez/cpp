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
        cout << "0 -- Salir" << endl;

        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }

        productos (opcion);
    }
}
#include <iostream>

using namespace std;

void productos (int opcion)
{
    system ("cls");
    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
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
