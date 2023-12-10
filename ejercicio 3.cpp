#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int score1, score2, score3, score4;
    float average;

    cout << "Introduce la puntuación del primer estudiante: ";
    cin >> score1;
    cout << "Introduce la puntuación del segundo estudiante: ";
    cin >> score2;
    cout << "Introduce la puntuación del tercer estudiante: ";
    cin >> score3;
    cout << "Introduce la puntuación del cuarto estudiante: ";
    cin >> score4;

    average = (score1 + score2 + score3 + score4) / 4.0;

    cout << "La media de las puntuaciones es: " << average << endl;

    if (average >= 90 && average <= 100) {
        cout << "Puntuación A" << endl;
    } else if (average >= 80 && average < 90) {
        cout << "Puntuación B" << endl;
    } else if (average >= 70 && average < 80) {
        cout << "Puntuación C" << endl;
    } else if (average >= 60 && average < 70) {
        cout << "Puntuación D" << endl;
    } else {
        cout << "Puntuación E" << endl;
    }

    system("pause");
    return 0;
}