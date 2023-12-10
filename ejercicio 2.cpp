#include<iostream>
using namespace std;

int main() {
int limite, base;

cout << "Ingrese el límite máximo entero positivo: ";
cin >> limite;
cout << "Ingrese la base entera positiva: ";
cin >> base;

int potencia = 1;
while (potencia < limite) {
    cout << base << " elevado a la " << potencia << " es igual a " << base << endl;
    potencia++;

    if (base * potencia >= limite) {
        cout << "Se alcanzó o superó el límite máximo." << endl;
    }
}

return 0;
}