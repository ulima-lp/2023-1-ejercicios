#include <iostream>
using namespace std;

int main(){
    int matriz[3][3];
    srand(time(0));
    cout << "Matriz generada aleatoriamente:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 9 + 1;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}