#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > 0) cout << "Positivo";
    else if(num < 0) cout << "Negativo";
    else cout << "Cero";
    cout << endl;

    return 0;
}

