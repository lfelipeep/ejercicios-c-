#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    cout << (num % 2 == 0 ? "Es par" : "Es impar") << endl;
    return 0;
}
