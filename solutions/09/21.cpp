#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int numeroAleatorio = rand() % 100 + 1;
    int intento;
    int intentos = 0;

    do {
        cout << "Adivina el número (entre 1 y 100): ";
        cin >> intento;
        intentos++;

        if (intento > numeroAleatorio) {
            cout << "Demasiado alto. Intenta nuevamente." << endl;
        } else if (intento < numeroAleatorio) {
            cout << "Demasiado bajo. Intenta nuevamente." << endl;
        } else {
            cout << "¡Felicidades! Adivinaste el número en " << intentos << " intentos." << endl;
        }
    } while (intento != numeroAleatorio);


    return 0;
}