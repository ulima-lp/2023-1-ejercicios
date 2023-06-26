#include "lib/p8g.hpp"
#include <iostream>

using namespace p8g;
using namespace std;

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
    void draw(){
        triangle(punto1_x, punto1_y, punto2_x, punto2_y, punto3_x, punto3_y);
    }
    void mover(double desplazamiento){
        punto1_x = punto1_x + desplazamiento;
        punto2_x = punto2_x + desplazamiento;
        punto3_x = punto3_x + desplazamiento;
    }
};

void p8g::draw() {
    background(220);
    rect(50, 50, 100, 100);
    
    t.draw();
}

void p8g::keyPressed() {
    cout << keyCode << endl;
    //263 <-
    //262 ->
    //264 ⬇️
    //265 ⬆️
    switch (keyCode)
    {
    case 263:
        t.mover(-5);
        break;
    case 262:
        t.mover(5);
        break;        
    default:
        break;
    }
}
void p8g::keyReleased() {}
void p8g::mouseMoved() {}
void p8g::mousePressed() {}
void p8g::mouseReleased() {}
void p8g::mouseWheel(float delta) {}

Triangulo t(50, 50, 100, 100, 150, 50);
int main() {
    run(320, 320, "Hello p8g!");
}