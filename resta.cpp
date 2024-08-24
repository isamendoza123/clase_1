#include <iostream>
using namespace std;

int main() {
    int num1, num2, resta;


    // Esta línea solicita el primer número
    cout<< "Ingrese el primer número:" ;
    cin >> num1;

    cout << "Ingrese el segundo número:" ;
    cin >> num2;

    // Calcular la resta
    resta= num1 - num2;

    // Mostrar el resultado
    cout<< " La resta de " << num1 << " y " <<num2<< " es: " << resta << endl;
   
    return 0;
}