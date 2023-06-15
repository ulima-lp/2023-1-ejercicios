#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void generarMatriz(char** matriz, int filas, int columnas) {
    srand(time(0));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 'A' + rand() % 26;  // Genera caracteres aleatorios entre 'A' y 'Z'
        }
    }
}

int contarLetrasA(char** matriz, int filas, int columnas) {
    int contador = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] == 'A') {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    int filas, columnas;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    // Crear la matriz dinámica
    char** matriz = new char*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new char[columnas];
    }

    // Generar y mostrar la matriz
    generarMatriz(matriz, filas, columnas);
    cout << "Matriz generada:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Contar la cantidad de letras 'A' en la matriz
    int cantidadA = contarLetrasA(matriz, filas, columnas);
    cout << "Cantidad de letras 'A' en la matriz: " << cantidadA << endl;

    return 0;
}
