#include <iostream>
#include <cstring>

using namespace std;

int contarVocales(char* cadena) {
    int contador = 0;
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud; i++) {
        char c = tolower(cadena[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    return contador;
}

int main() {
    char cadena[100];
    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;

    int cantidadVocales = contarVocales(cadena);
    cout << "La cantidad de vocales en la cadena es: " << cantidadVocales << endl;

    int longitud = strlen(cadena);
    cout << "La cantidad de caracteres en la cadena es: " << longitud << endl;

    return 0;
}
