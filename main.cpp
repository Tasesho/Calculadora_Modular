#include <iostream>
#include "calculadora.h"
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese primer numero: ";
    cin >> a;

    cout << "Ingrese segundo numero: ";
    cin >> b;

    cout << "\n--- Resultados ---" << endl;
    cout << "Suma: " << sumar(a, b) << endl;
    cout << "Resta: " << restar(a, b) << endl;
    cout << "Multiplicacion: " << multiplicar(a, b) << endl;

    if (b == 0) {
        cout << "Division por 0 invalida" << endl;
    } else {
        cout << "Division: " << dividir(a, b) << endl;
    }

    system("pause"); // <-- Esto va antes del return
    return 0;
}
