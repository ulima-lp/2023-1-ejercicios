#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << "Bienvenido al juego de pi:piedra, pa:papel o ti:tijera!" << endl;

    int repeticiones = 5;
    // Definir las opciones del juego
    string opciones[] = {"pi", "pa", "ti"};
    string opcionesTraducidas[] = {"piedra", "papel", "tijera"};
    int numOpciones = 3;
    float repeticionesGanadas = 0;

    for (int i = 0; i < repeticiones; i++){
        int n = i + 1;
        // Obtener la jugada del usuario
        cout << n << ". Elige tu jugada (pi, pa o ti): ";
        string jugadaUsuario;
        cin >> jugadaUsuario;

        // Generar la jugada aleatoria de la computadora
        int indiceAleatorio = rand() % numOpciones;
        string jugadaComputadora = opciones[indiceAleatorio];
        string jugadaComputadoraTraducida = opcionesTraducidas[indiceAleatorio];

        cout << "La computadora eligió: " << jugadaComputadora << ":" 
            << jugadaComputadoraTraducida << endl;

        // Determinar el resultado del juego
        if (jugadaUsuario == jugadaComputadora) {
            cout << "Empate!" << endl;
            repeticionesGanadas += 0.5; 
        } else if (
            (jugadaUsuario == "pi" && jugadaComputadora == "ti") ||
            (jugadaUsuario == "pa" && jugadaComputadora == "pi") ||
            (jugadaUsuario == "ti" && jugadaComputadora == "pa")
        ) {
            cout << "¡Ganaste!" << endl;
            repeticionesGanadas++;
        } else {
            cout << "Perdiste." << endl;
        }    
    }
    cout << "==================" << endl;
    if (repeticionesGanadas > repeticiones / 2.0) {
        cout << "¡Ganaste!" << endl;
    } else if (repeticionesGanadas == repeticiones / 2) {
        cout << "Empataste." << endl;
    } else {
        cout << "Perdiste." << endl;
    }
    cout << "Puntaje:" << repeticionesGanadas << endl;

    return 0;
}
