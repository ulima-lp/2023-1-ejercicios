#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TESORO = 10;
int tesoro_fila;
int tesoro_columna;

void inicializarTablero(int** tablero, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            tablero[i][j] = 0;
        }
    }
}

void colocarTesoro(int** tablero, int m, int n) {
    srand(time(0));
    tesoro_fila = rand() % m;
    tesoro_columna = rand() % n;
}

void mostrarTablero(int** tablero, int m, int n) {
    cout << "Tablero:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
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
    int m, n;
    cout << "Ingrese el número de filas (m): ";
    cin >> m;
    cout << "Ingrese el número de columnas (n): ";
    cin >> n;

    int** tablero = new int*[m];
    for (int i = 0; i < m; i++) {
        tablero[i] = new int[n];
    }

    inicializarTablero(tablero, m, n);
    colocarTesoro(tablero, m, n);

    cout << "¡Bienvenido al juego de búsqueda del tesoro!" << endl;
    cout << "Tienes 3 intentos para encontrar el tesoro." << endl;

    int intentos = 3;
    bool encontrado = false;

    while (intentos > 0) {
        mostrarTablero(tablero, m, n);

        int fila, columna;
        cout << "Intento #" << (3 - intentos + 1) << endl;
        cout << "Ingrese la fila (0-" << (m - 1) << "): ";
        cin >> fila;
        cout << "Ingrese la columna (0-" << (n - 1) << "): ";
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
        }
    }

    if (!encontrado) {
        cout << "Agotaste tus intentos. ¡Perdiste!" << endl;
    }

    cout << "Ubicación del tesoro:" << endl;
    tablero[tesoro_fila][tesoro_columna] = TESORO;
    mostrarTablero(tablero, m, n);

    return 0;
}
