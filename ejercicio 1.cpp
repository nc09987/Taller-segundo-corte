#include<iostream>
using namespace std;

int main() {
int num1, num2, num3;

cout << "Ingrese el primer número: ";
cin >> num1;
cout << "Ingrese el segundo número: ";
cin >> num2;
cout << "Ingrese el tercer número: ";
cin >> num3;

if (num1 < num2 && num2 < num3) {
    cout << "Los números están en orden numérico ascendente" << endl;
} else if (num1 > num2 && num2 > num3) {
    cout << "Los números están en orden numérico descendente" << endl;
} else {
    cout << "Los números no están en orden numérico" << endl;
}
return 0;
}