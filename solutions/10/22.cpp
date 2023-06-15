#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int TESORO = 10;

void inicializarTablero(int** tablero, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            tablero[i][j] = 0;
        }
    }
}

void colocarTesoros(int** tablero_tesoros, int m, int n, int cantidadTesoros) {
    srand(time(0));
    int tesorosColocados = 0;

    while (tesorosColocados < cantidadTesoros) {
        int fila = rand() % m;
        int columna = rand() % n;

        if (tablero_tesoros[fila][columna] == 0) {
            tablero_tesoros[fila][columna] = TESORO;
            tesorosColocados++;
        }
    }
}

void mostrarTablero(int** tablero, int m, int n) {
    cout << "Tablero:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (tablero[i][j] == -1) {
                cout << " -1 ";
            } else if (tablero[i][j] == TESORO) {
                cout << " " << TESORO << " ";
            } else {
                cout << " " << tablero[i][j] << " ";
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
    int** tablero_tesoros = new int*[m];
    for (int i = 0; i < m; i++) {
        tablero[i] = new int[n];
        tablero_tesoros[i] = new int[n];
    }

    inicializarTablero(tablero, m, n);
    inicializarTablero(tablero_tesoros, m, n);

    int cantidadTesoros;
    cout << "Ingrese la cantidad de tesoros a encontrar: ";
    cin >> cantidadTesoros;

    colocarTesoros(tablero_tesoros, m, n, cantidadTesoros);

    cout << "¡Bienvenido al juego de búsqueda del tesoro!" << endl;
    cout << "Tienes 3 intentos para encontrar los tesoros." << endl;

    int intentos = 3;
    int tesorosEncontrados = 0;

    while (intentos > 0 && tesorosEncontrados < cantidadTesoros) {
        mostrarTablero(tablero, m, n);

        int fila, columna;
        cout << "Intento #" << (3 - intentos + 1) << endl;
        cout << "Ingrese la fila (0-" << (m - 1) << "): ";
        cin >> fila;
        cout << "Ingrese la columna (0-" << (n - 1) << "): ";
        cin >> columna;

        if (tablero[fila][columna] == tablero_tesoros[fila][columna]) {
            tablero[fila][columna] = TESORO;
            cout << "¡Encontraste un tesoro!" << endl;
            tesorosEncontrados++;
        } else {
            cout << "No hay tesoro en esa posición." << endl;
            tablero[fila][columna] = -1;
            intentos--;
        }
    }

    if (tesorosEncontrados == cantidadTesoros) {
        cout << "¡Ganaste! Encontraste todos los tesoros." << endl;
    } else {
        cout << "Agotaste tus intentos. ¡Perdiste!" << endl;
    }

    cout << "Ubicación de los tesoros:" << endl;
    mostrarTablero(tablero, m, n);
}
