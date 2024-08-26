#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, multiplicacion;

    // Esta línea solicita el primer numero
    cout<< "Ingrese el primer numero:";
    cin>> num1;

    // Esta línea solicita el primer número
    cout<< "Ingrese el segundo número:";
    cin>> num2;

    // Esta línea solicita el primer número
    cout<< "Ingrese el tercer número:";
    cin>> num3;

    // Esta línea solicita el cuarto número
    cout<< "Ingrese el cuarto número:";
    cin>> num4;

    // Calcular la multiplicacion 
    multiplicacion= num1* num2* num3* num4;

    //Mostrar el resultado
    cout<< " la multiplicacion es: " <<num1<<"*" <<num2<<"*" <<num3<<"*" <<num4<< " es: "  
    <<multiplicacion<< endl;

    return 0;
}
