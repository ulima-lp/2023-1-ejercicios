#include <iostream>
using namespace std;

int main(){
    int matriz[3][3];
    int sumaDiagonal = 0;

    srand(time(0));
    cout << "Matriz generada aleatoriamente:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 9 + 1;
            cout << matriz[i][j] << " ";
            if (i == j) {
                sumaDiagonal += matriz[i][j];
            }
        }
        cout << endl;
    }    

    cout << "La suma de los elementos en la diagonal principal es: " << sumaDiagonal << endl;

    return 0;
}