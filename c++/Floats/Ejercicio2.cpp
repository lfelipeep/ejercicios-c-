#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> celsius;

    cout << "Equivalente en Fahrenheit: " << (celsius * 9/5) + 32 << endl;
    return 0;
}
