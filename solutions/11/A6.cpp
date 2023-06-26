#include <iostream>

// Definición de la clase Nodo
class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = nullptr;
    }
};

// Definición de la clase ListaEnlazada
class ListaEnlazada {
public:
    Nodo* cabeza;

    ListaEnlazada() {
        cabeza = nullptr;
    }

    // a) Contar número de nodos
    int contarNodos() {
        int contador = 0;
        Nodo* actual = cabeza;
        while (actual != nullptr) {
            contador++;
            actual = actual->siguiente;
        }
        return contador;
    }

    // b) Crear una nueva lista enlazada invertida
    ListaEnlazada invertirLista() {
        ListaEnlazada listaInvertida;
        Nodo* actual = cabeza;
        while (actual != nullptr) {
            Nodo* nuevoNodo = new Nodo(actual->dato);
            nuevoNodo->siguiente = listaInvertida.cabeza;
            listaInvertida.cabeza = nuevoNodo;
            actual = actual->siguiente;
        }
        return listaInvertida;
    }

    // c) Reemplazar todas las ocurrencias de un elemento x por un nuevo valor y
    void reemplazarElemento(int x, int y) {
        Nodo* actual = cabeza;
        while (actual != nullptr) {
            if (actual->dato == x) {
                actual->dato = y;
            }
            actual = actual->siguiente;
        }
    }

    // d) Dividir una lista enlazada en dos listas en un nodo con valor x
    void dividirLista(int x, ListaEnlazada& primeraLista, ListaEnlazada& segundaLista) {
        Nodo* actual = cabeza;
        while (actual != nullptr) {
            if (actual->dato == x) {
                segundaLista.cabeza = actual->siguiente;
                actual->siguiente = nullptr;
                break;
            }
            primeraLista.insertarNodo(actual->dato);
            actual = actual->siguiente;
        }
    }

    // Insertar un nodo al final de la lista
    void insertarNodo(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        if (cabeza == nullptr) {
            cabeza = nuevoNodo;
        } else {
            Nodo* actual = cabeza;
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevoNodo;
        }
    }

    // Imprimir la lista enlazada
    void imprimirLista() {
        Nodo* actual = cabeza;
        while (actual != nullptr) {
            std::cout << actual->dato << " ";
            actual = actual->siguiente;
        }
        std::cout << std::endl;
    }
};

// Ejemplo de uso
int main() {
    ListaEnlazada lista;
    lista.insertarNodo(1);
    lista.insertarNodo(2);
    lista.insertarNodo(3);
    lista.insertarNodo(4);
    lista.insertarNodo(5);

    std::cout << "Lista original: ";
    lista.imprimirLista();

    // a) Contar número de nodos
    int numeroNodos = lista.contarNodos();
    std::cout << "Número de nodos: " << numeroNodos << std::endl;

    // b) Crear una nueva lista enlazada invertida
    ListaEnlazada listaInvertida = lista.invertirLista();
    std::cout << "Lista invertida: ";
    listaInvertida.imprimirLista();

    // c) Reemplazar todas las ocurrencias de un elemento x por un nuevo valor y
    //lista.reemplazarElemento(3, 6);
    std::cout << "Lista con reemplazo: ";
    lista.imprimirLista();

    // d) Dividir una lista enlazada en dos listas en un nodo con valor x
    ListaEnlazada primeraLista;
    ListaEnlazada segundaLista;
    lista.dividirLista(3, primeraLista, segundaLista);
    std::cout << "Primera lista después de dividir: ";
    primeraLista.imprimirLista();
    std::cout << "Segunda lista después de dividir: ";
    segundaLista.imprimirLista();

    return 0;
}
