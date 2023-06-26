#include <iostream>
using namespace std;

class Persona {
private:
  string nombre;
  int edad;
public:
  void setNombre(string nombre) {
    this->nombre = nombre;
  }
  
  void setEdad(int edad) {
    this->edad = edad;
  }
  
  string getNombre() {
    return nombre;
  }
  
  int getEdad() {
    return edad;
  }
};

class Rectangulo {
private:
  int ancho;
  int alto;
public:
  Rectangulo(int ancho, int alto) {
    this->ancho = ancho;
    this->alto = alto;
  }
  
  int calcularArea() {
    return ancho * alto;
  }
  
  int calcularPerimetro() {
    return 2 * (ancho + alto);
  }
};

#include <cmath>

class Triangulo {
private:
    double punto1_x, punto1_y;
    double punto2_x, punto2_y;
    double punto3_x, punto3_y;

public:
    Triangulo(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y) {
        punto1_x = p1_x;
        punto1_y = p1_y;
        punto2_x = p2_x;
        punto2_y = p2_y;
        punto3_x = p3_x;
        punto3_y = p3_y;
    }

    double calcularPerimetro() {
        double lado1 = calcularDistancia(punto1_x, punto1_y, punto2_x, punto2_y);
        double lado2 = calcularDistancia(punto2_x, punto2_y, punto3_x, punto3_y);
        double lado3 = calcularDistancia(punto3_x, punto3_y, punto1_x, punto1_y);

        return lado1 + lado2 + lado3;
    }

private:
    double calcularDistancia(double x1, double y1, double x2, double y2) {
        double distancia = std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));
        return distancia;
    }
};


class Circulo {
private:
  double radio;
public:
  Circulo(double radio) {
    this->radio = radio;
  }
  
  double calcularArea() {
    return 3.14159 * radio * radio;
  }
  
  double calcularCircunferencia() {
    return 2 * 3.14159 * radio;
  }
};

class Fecha {
private:
  int dia;
  int mes;
  int anio;
public:
  void setFecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
  }
  
  bool esFechaValida() {
    if (anio < 0 || mes < 1 || mes > 12 || dia < 1) {
        return false;
    }

    // Verificar los días válidos para cada mes
    int diasPorMes = 0;
    if (mes == 2) {
        // Verificar si es un año bisiesto
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            diasPorMes = 29;  // Febrero en un año bisiesto tiene 29 días
        } else {
            diasPorMes = 28;  // Febrero en un año no bisiesto tiene 28 días
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasPorMes = 30;  // Abril, junio, septiembre y noviembre tienen 30 días
    } else {
        diasPorMes = 31;  // Resto de los meses tienen 31 días
    }

    if (dia > diasPorMes) {
        return false;
    }

    return true;
  }

};

class Libro {
private:
  string titulo;
  string autor;
  int anioPublicacion;
public:
  void setTitulo(string titulo) {
    this->titulo = titulo;
  }
  
  void setAutor(string autor) {
    this->autor = autor;
  }
  
  void setAnioPublicacion(int anio) {
    anioPublicacion = anio;
  }
  
  void mostrarInformacion() {
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Año de publicación: " << anioPublicacion << endl;
  }
};

class Calculadora {
public:
  int sumar(int a, int b) {
    return a + b;
  }
  
  int restar(int a, int b) {
    return a - b;
  }
  
  int multiplicar(int a, int b) {
    return a * b;
  }
  
  double dividir(int a, int b) {
    return static_cast<double>(a) / b;
  }
};

class CuentaBancaria {
private:
  string numeroCuenta;
  double saldo;
  string titular;
public:
  void depositar(double monto) {
    saldo += monto;
  }
  
  void retirar(double monto) {
    if (monto <= saldo) {
      saldo -= monto;
    }
  }
  
  double getSaldo() {
    return saldo;
  }
};

class Tiempo {
private:
  int horas;
  int minutos;
  int segundos;
public:
  Tiempo(int horas, int minutos, int segundos) {
    this->horas = horas;
    this->minutos = minutos;
    this->segundos = segundos;
  }
  
  void sumarTiempo(int h, int m, int s) {
        segundos += s;
        minutos += m;
        horas += h;

        if (segundos >= 60) {
            minutos += segundos / 60;
            segundos = segundos % 60;
        }

        if (minutos >= 60) {
            horas += minutos / 60;
            minutos = minutos % 60;
        }
    }

    void restarTiempo(int h, int m, int s) {
        segundos -= s;
        minutos -= m;
        horas -= h;

        if (segundos < 0) {
            minutos -= (-segundos + 59) / 60;
            segundos = 60 + (segundos % 60);
        }

        if (minutos < 0) {
            horas -= (-minutos + 59) / 60;
            minutos = 60 + (minutos % 60);
        }

        if (horas < 0) {
            horas = 0;
            minutos = 0;
            segundos = 0;
        }
    }
};


int main(){
    Persona p;
    p.setEdad(23);
    p.setNombre("B");
    cout << p.getNombre() << ": " << p.getEdad() << endl;

    return 0;
}