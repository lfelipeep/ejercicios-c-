#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    cout << "Longitud: " << palabra.length() << " letras" << endl;
    return 0;
}
