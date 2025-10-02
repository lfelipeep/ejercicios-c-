#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "1. Saludar\n2. Despedirse\nElija una opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1: cout << "Hola!" << endl; break;
        case 2: cout << "Adios!" << endl; break;
        default: cout << "Opcion invalida" << endl;
    }
    return 0;
}

