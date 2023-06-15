#include <iostream>

using namespace std;

int main() {
    string palabraSecreta = "elefante";
    int intentos = 5;
    string letrasAdivinadas;
    string letrasIngresadas;
    for (int i = 0; i < palabraSecreta.length(); i++) {
        letrasAdivinadas += '_';
    }

    cout << "Bienvenido al juego del ahorcado!" << endl;
    cout << "Adivina la palabra, ingresando una letra a la vez." << endl;
    cout << "Tienes " << intentos << " intentos." << endl;

    while (intentos > 0) {
        cout << "Palabra: " << letrasAdivinadas << endl;
        cout << "Letras ingresadas: " << letrasIngresadas << endl;
        cout << "=====================================" << endl;
        cout << "Ingresa una letra: ";
        char letra;
        cin >> letra;

        bool letraAdivinada = false;
        for (int i = 0; i < palabraSecreta.length(); i++) {
            if (palabraSecreta[i] == letra) {
                letrasAdivinadas[i] = letra;
                letraAdivinada = true;
            }
        }

        if (letraAdivinada) {
            cout << "¡Correcto!" << endl;
        } else {
            cout << "Letra incorrecta." << endl;
            bool esRepetida = false;
            for (int i = 0; i < letrasIngresadas.length(); i++) {
                if (letrasIngresadas[i] == letra) {
                    esRepetida = true;
                    break;      
                }
            }
            if(!esRepetida || letrasIngresadas.length() == 0){
                intentos--;
                letrasIngresadas += letra;  
            }
        }

        if (letrasAdivinadas == palabraSecreta) {
            cout << "=====================================" << endl;
            cout << "¡Felicidades! Adivinaste la palabra." << endl;
            break;
        }

        cout << "Intentos restantes: " << intentos << endl;
    }

    if (intentos == 0) {
        cout << "=====================================" << endl;
        cout << "Perdiste. La palabra correcta era: " << palabraSecreta << endl;
    }

    return 0;
}
