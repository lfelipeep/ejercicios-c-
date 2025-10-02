#include <iostream>
using namespace std;

int main() {
    int nums[5];
    cout << "Ingrese 5 numeros: ";
    for(int i=0;i<5;i++) cin >> nums[i];

    cout << "Los numeros son: ";
    for(int i=0;i<5;i++) cout << nums[i] << " ";
    cout << endl;
    return 0;
}
