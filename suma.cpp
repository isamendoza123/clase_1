#include <iostream>

using namespace std;

int main() {
    int num1, num2, suma;

    // Solicitar los números al usuario
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Calcular la suma
    suma = num1 + num2;

    // Mostrar el resultado
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;

    return 0;
}