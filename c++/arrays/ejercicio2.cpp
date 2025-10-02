#include <iostream>
using namespace std;

int main() {
    float notas[5], suma=0;
    cout << "Ingrese 5 notas: ";
    for(int i=0;i<5;i++) {
        cin >> notas[i];
        suma += notas[i];
    }

    cout << "Promedio = " << suma/5 << endl;
    return 0;
}

