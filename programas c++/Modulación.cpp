int sumar (int a, int b)
{
    return a + b;
}
#include <iostream>

using namespace std;

extern int sumar (int a, int b);

int main(int argc, char const *argv[])
{
    system ("cls");

    cout << sumar (9, 5);
    cout << endl;
    return 0;
}
