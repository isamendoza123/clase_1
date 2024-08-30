#include <iostream>

using namespace std;

int main() {
    int num;

    cout<< "Ingrese un número:";
    cin>> num;

    //Verificamos si el número es negativo o no
    if (num < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número no es negativo: " << endl;
    }
    return 0;
}
