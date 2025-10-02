#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << (edad >= 18 ? "Es mayor de edad" : "Es menor de edad") << endl;
    return 0;
}
