#include <iostream>
using namespace std;

int main() {
    int i=1, suma=0;
    while(i<=5) {
        suma += i;
        i++;
    }
    cout << "Suma = " << suma << endl;
    return 0;
}

