#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

const int TESORO = 10;
int tesoro_fila;
int tesoro_columna;

//inicializarTablero, colocarTesoro, mostrarTablero
void inicializarTablero(int **tablero, int m, int n){
    for(int i = 0; i <m ; i++){
        for(int j = 0; j <n ; j++){
            tablero[i][j] = 0;
        }
    }
}

void colocarTesoro(int m, int n){
    srand(time(0));
    tesoro_fila = rand() % m;
    tesoro_columna = rand() % n;
}

void mostrarTablero(int **tablero, int m, int n){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if(tablero[i][j] == -1 || tablero[i][j] == TESORO ){
                cout << " " << tablero[i][j] << " ";    
            }else{
                cout << "  " <<tablero[i][j] << " ";    
            }
        }
        cout << endl;
    }
}

int main (){
    int m, n;
    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;

    //creación tablero
    //declarar
    int **tablero = new int *[m];
    for(int i = 0; i <m ; i++){
        tablero[i] = new int [n];
    }
    //inicialización //asignación de ceros
    inicializarTablero(tablero, m, n);
    colocarTesoro(m, n);

    int intentos = 3;

    while(intentos > 0){
        cout << "====================================" << endl;
        mostrarTablero(tablero, m, n);

        int fila, columna;
        cout << "Ingrese fila (0-" << m - 1 << "):";
        cin >> fila;
        cout << "Ingrese columna (0-" << n - 1 << "):";
        cin >> columna;
        
        if(fila == tesoro_fila && columna == tesoro_columna){
            tablero[fila][columna] = TESORO;
            cout << "¡Ganaste!" << endl;
            break;
        }else{
            tablero[fila][columna] = -1;
            intentos--;
        }
    }    
    cout << "====================================" << endl;
    if(intentos == 0){
        cout << "¡Perdiste!" << endl;
    }
    tablero[tesoro_fila][tesoro_columna] = TESORO;
    mostrarTablero(tablero, m, n);

    return 0;
}