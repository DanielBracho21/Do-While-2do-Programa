#include <iostream>
using namespace std;

int main()
{
    int opcion = 0;
    do
    {
        cout << "Ingrese 1 para mostrar mensaje\n";
        cout << "Ingrese 2 para hacer algo mas\n";
        cout << "Ingrese 0 para salir\n";

        cout << "Ingrese una opción a ejecutar\n";
        cin >> opcion;
    }
    //Muestra el menu hasta que la opcion sea cero
    while (opcion != 0);
    return 0;
}
