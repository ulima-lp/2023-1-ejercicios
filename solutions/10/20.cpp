#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void generateMatriz(int** matriz, int filas, int columnas) {
    srand(time(0));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 10; 
        }
    }
}

int getNumerosPares(int** matriz, int filas, int columnas) {
    int contador = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] % 2 == 0) {
                contador++;
            }
        }
    }
    return contador;
}

int getMaximo(int** matriz, int filas, int columnas) {
    int maximo = matriz[0][0];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
            }
        }
    }
    return maximo;
}

int getMinimo(int** matriz, int filas, int columnas) {
    int minimo = matriz[0][0];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
        }
    }
    return minimo;
}

int getRepetidos(int** matriz, int filas, int columnas) {
    int repetidos = 0;
    int* contador = new int[10]; // Array para contar la cantidad de veces que aparece cada número
    for (int i = 0; i < 10; i++) {
        contador[i] = 0; // Inicializar el contador en 0 para cada número
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            int numero = matriz[i][j];
            contador[numero]++;
            if (contador[numero] == 2) {
                repetidos++;
            }
        }
    }
    return repetidos;
}

int main() {
    int filas, columnas;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    // Crear la matriz dinámica
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    // Generar la matriz
    generateMatriz(matriz, filas, columnas);

    // Mostrar la matriz generada
    cout << "Matriz generada:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Obtener y mostrar la cantidad de números pares
    int numerosPares = getNumerosPares(matriz, filas, columnas);
    cout << "Cantidad de numeros pares en la matriz: " << numerosPares << endl;

    // Obtener y mostrar el número máximo
    int maximo = getMaximo(matriz, filas, columnas);
    cout << "Numero maximo en la matriz: " << maximo << endl;

    // Obtener y mostrar el número mínimo
    int minimo = getMinimo(matriz, filas, columnas);
    cout << "Numero minimo en la matriz: " << minimo << endl;

    // Obtener y mostrar la cantidad de números repetidos
    int repetidos = getRepetidos(matriz, filas, columnas);
    cout << "Cantidad de numeros repetidos en la matriz: " << repetidos << endl;

    return 0;
}
