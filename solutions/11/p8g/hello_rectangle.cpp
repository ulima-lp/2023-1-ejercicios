#include "p8g.hpp"
#include <iostream>

using namespace p8g;
using namespace std;

class Rectangulo{
    private:
        int x;//origenX
        int y;//origenY
        int ancho;
        int alto;
    public:
        void set_origen(int _x, int _y){
            x = _x;
            y = _y;
        }
        void set_origen_x(int _x){
            x = _x;
        }
        void set_origen_y(int _y){
            y = _y;
        }
        int get_origen_x(){
            return x;
        }
        int get_origen_y(){
            return y;
        }
        void set_ancho(int a){
            ancho = a;
        }
        void set_alto(int a){
            alto = a;
        }
        int get_ancho(){
            return ancho;
        }
        int get_alto(){
            return alto;
        }
        
        int perimetro(){
            return 2*(ancho + alto);
        }
        int area(){
            return ancho * alto;
        }
        void dibujar(){
            //origen x, origen y, ancho, alto
            rect(x, y, ancho, alto);
        }
        void moverX(int desplazamiento){
            x = x + desplazamiento;
        }
};

void p8g::draw() {
    background(220);
    r.dibujar();
}

void p8g::keyPressed() {
    cout << keyCode << endl;
    //263 <-
    //262 ->
    int desplazamiento = 0;
    switch (keyCode){
    case 263:
        desplazamiento = -10;
        break;
    case 262:
        desplazamiento = 10;
        break;
    default:
        break;
    }
    r.moverX(desplazamiento);
}
void p8g::keyReleased() {}
void p8g::mouseMoved() {}
void p8g::mousePressed() {}
void p8g::mouseReleased() {}
void p8g::mouseWheel(float delta) {}

Rectangulo r;
int main() {
    r.set_origen_x(150);
    r.set_origen_y(150);
    r.set_ancho(200);
    r.set_alto(200); 
    run(500, 500, "Gráficos");
}