#include<cstdlib>
#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
int edad1, edad2, edad3;

cout << "Ingrese la edad del primer hijo: ";
cin >> edad1;
cout << "Ingrese la edad del segundo hijo: ";
cin >> edad2;
cout << "Ingrese la edad del tercer hijo: ";
cin >> edad3;

if (edad1 >= edad2 && edad1 >= edad3) {
    cout << "La edad mayor es: " << edad1 << endl;
} else if (edad2 >= edad1 && edad2 >= edad3) {
    cout << "La edad mayor es: " << edad2 << endl;
} else {
    cout << "La edad mayor es: " << edad3 << endl;
}

if (edad1 <= edad2 && edad1 <= edad3) {
    cout << "La edad menor es: " << edad1 << endl;
} else if (edad2 <= edad1 && edad2 <= edad3) {
    cout << "La edad menor es: " << edad2 << endl;
} else {
    cout << "La edad menor es: " << edad3 << endl;
}

float media = (edad1 + edad2 + edad3) / 3.0;
cout << "La media de las edades es: " << media << endl;

system("pause");
return 0;
}