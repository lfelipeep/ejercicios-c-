#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cout << "Ingrese coordenadas (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Ingrese coordenadas (x2 y2): ";
    cin >> x2 >> y2;

    double distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    cout << "Distancia: " << distancia << endl;
    return 0;
}
