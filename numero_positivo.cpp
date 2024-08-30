#include <iostream>

using namespace std;

int main() {
    int num;

    cout<< "Ingrese un número:";
    cin>> num;

    // Verificamos si el numero es positivo o no
    if (num > 0) {
        cout << "El número es positivo." << endl;
    } else {
        cout << "El número no es positivo: " << endl;
    }
    return 0;

}