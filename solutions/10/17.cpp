#include <iostream>
#include <ctime>

using namespace std;

int sumArreglo(int* arreglo, int m) {
    int suma = 0;
    for (int i = 0; i < m; i++) {
        suma += arreglo[i];
    }
    return suma;
}

int sumMatrix(int** matriz, int m, int n) {
    int suma = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            suma += matriz[i][j];
        }
    }
    return suma;
}

double averageArreglo(int* arreglo, int m) {
    int suma = sumArreglo(arreglo, m);
    return (double)(suma) / m;
}

double averageMatrix(int** matriz, int m, int n) {
    int suma = sumMatrix(matriz, m, n);
    return (double)(suma) / (m * n);
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

int main() {
    int ma;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> ma;

    int* arreglo = generateArreglo(ma);
    cout << "Arreglo: ";
    for (int i = 0; i < ma; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    int mm;
    int n;
    cout << "Ingrese el número de filas: ";
    cin >> mm;
    cout << "Ingrese el número de columnas: ";
    cin >> n;

    int** matriz = generateMatriz(mm, n);
    cout << "Matriz:" << endl;
    for (int i = 0; i < mm; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    int sumaArreglo = sumArreglo(arreglo, ma);
    cout << "Suma del arreglo: " << sumaArreglo << endl;

    int sumaMatriz = sumMatrix(matriz, mm, n);
    cout << "Suma de la matriz: " << sumaMatriz << endl;

    double promedioArreglo = averageArreglo(arreglo, ma);
    cout << "Promedio del arreglo: " << promedioArreglo << endl;

    double promedioMatriz = averageMatrix(matriz, mm, n);
    cout << "Promedio de la matriz: " << promedioMatriz << endl;
}
