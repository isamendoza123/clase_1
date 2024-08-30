#include <iostream>

using namespace std;

int main() {
    int num;

    cout<< "Ingrese un número:";
    cin>> num;

    // Verificamos si el numero es par o no
    if (num%2==0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número no es par: " << endl;
    }
    return 0;
}