#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAMANIO_TABLERO = 5;
const int TESORO = 10;
const int INTENTOS = 3;
int tesoro_fila;
int tesoro_columna;

void inicializarTablero(int tablero[TAMANIO_TABLERO][TAMANIO_TABLERO]) {
    for (int i = 0; i < TAMANIO_TABLERO; i++) {
        for (int j = 0; j < TAMANIO_TABLERO; j++) {
            tablero[i][j] = 0;
        }
    }
}

void colocarTesoro(int tablero[TAMANIO_TABLERO][TAMANIO_TABLERO]) {
    srand(time(0));
    tesoro_fila = rand() % TAMANIO_TABLERO;
    tesoro_columna = rand() % TAMANIO_TABLERO;
}

void mostrarTablero(const int tablero[TAMANIO_TABLERO][TAMANIO_TABLERO]) {
    for (int i = 0; i < TAMANIO_TABLERO; i++) {
        for (int j = 0; j < TAMANIO_TABLERO; j++) {
            if (tablero[i][j] == -1) {
                cout << " -1 ";
            } else if (tablero[i][j] == TESORO) {
                cout << " " << TESORO << " ";
            } else{
                cout << "  " << tablero[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int tablero[TAMANIO_TABLERO][TAMANIO_TABLERO];
    int intentos = INTENTOS;
    bool encontrado = false;

    inicializarTablero(tablero);
    colocarTesoro(tablero);

    cout << "¡Bienvenido al juego de búsqueda del tesoro!" << endl;
    cout << "Tienes 3 intentos para encontrar el tesoro." << endl;

    while (intentos > 0) {
        int fila, columna;
        cout << "Intento #" << (INTENTOS - intentos + 1) << endl;
        cout << "Ingrese la fila (0-4): ";
        cin >> fila;
        cout << "Ingrese la columna (0-4): ";
        cin >> columna;

        if (fila == tesoro_fila && columna == tesoro_columna) {
            tablero[fila][columna] = TESORO;
            cout << "¡Encontraste el tesoro! ¡Ganaste!" << endl;
            encontrado = true;
            break;
        } else {
            cout << "No hay tesoro en esa posición." << endl;
            tablero[fila][columna] = -1;
            intentos--;
            mostrarTablero(tablero);
        }
    }

    if (!encontrado) {
        cout << "Agotaste tus intentos. ¡Perdiste!" << endl;
    }
    cout << "La ubicación del tesoro era:" << endl;
    tablero[tesoro_fila][tesoro_columna] = TESORO;
    mostrarTablero(tablero);

    return 0;
}
