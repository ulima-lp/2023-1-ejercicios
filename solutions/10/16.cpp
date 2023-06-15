#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int* inputArreglo(int m) {
    int* arreglo = new int[m];
    for (int i = 0; i < m; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> arreglo[i];
    }
    return arreglo;
}

int** inputMatriz(int m, int n) {
    int** matriz = new int*[m];
    for (int i = 0; i < m; i++) {
        matriz[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el valor para la fila " << i + 1 << " columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }
    return matriz;
}

int* generateArreglo(int m) {
    int* arreglo = new int[m];
    srand(time(0));
    for (int i = 0; i < m; i++) {
        arreglo[i] = rand() % 10;
    }
    return arreglo;
}

int** generateMatriz(int m, int n) {
    int** matriz = new int*[m];
    srand(time(0));
    for (int i = 0; i < m; i++) {
        matriz[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
    return matriz;
}

void printArreglo(int* arreglo, int m) {
    cout << "Arreglo:";
    for (int i = 0; i < m; i++) {
        cout << " " << arreglo[i];
    }
    cout << endl;
}

void printMatriz(int** matriz, int m, int n) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> m;

    int* arreglo1 = inputArreglo(m);
    printArreglo(arreglo1, m);

    int n;
    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;

    int** matriz1 = inputMatriz(m, n);
    printMatriz(matriz1, m, n);

    int* arreglo2 = generateArreglo(m);
    printArreglo(arreglo2, m);

    int** matriz2 = generateMatriz(m, n);
    printMatriz(matriz2, m, n);

    return 0;
}
