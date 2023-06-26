#include <iostream>
using namespace std;

class Node{
    private:
        int value;
        Node * next;
    public:
        Node(int v){
            value = v;
            next = NULL;
        }
        ~Node(){}
        void set_value(int t){
            value=t;}
        int get_value(){
            return value;}
        void set_next(Node *t){
            next = t;
        }
        Node* get_next(){
            return next;}
};

class Linked_List{
    private:
        Node *root;
    public:
        Linked_List(){
            root=NULL;
        }
        ~Linked_List(){}
        void add(int T){
            Node *nuevo=new Node(T);
            if(root==NULL)
                root=nuevo;
            else{
                Node * tmp = root;
                while(tmp->get_next()!=NULL){
                    tmp=tmp->get_next();
                }
                tmp->set_next(nuevo);
            }
        }
        void print(){
            Node* tmp = root;
            while (tmp!=NULL)
            {
                cout<<tmp->get_value()<<"->";
                tmp=tmp->get_next();
            }
            cout<<"NULL"<<endl;
            
        }

};



int main(){
    Linked_List listita;
    listita.add(4787);
    listita.add(87);
    listita.add(77);
    listita.add(11);
    listita.print();

    int y = 10;
    cout<<"Direccion memoria Int: "<<&y<<endl;
    cout<<"Direccion memoria Listita: "<<&listita<<endl;


    return 0;
}














/*
class Node{
    private:
        int value;
        Node * next;
    public:
        Node(int v){
            value=v;
            next = NULL;
        }
        ~Node(){}
        void set_next(Node *n){
            next = n;
        }
        Node* get_next(){
            return next;
        }
        int get_value(){
            return value;
        }

};

class Linked_List{
    private:
        Node *root;
    public:
        Linked_List(){
            root=NULL;
        }
        void add(int t){
            Node *nuevo= new Node(t);
            if(root==NULL)
                root=nuevo;
            else{
                Node *tmp=root;
                while (tmp->get_next()!=NULL)
                {
                    tmp=tmp->get_next();
                }
                tmp->set_next(nuevo);                
            }
        }
        void print(){
            Node *tmp=root;
            while (tmp!=NULL)
            {
                cout<<tmp->get_value()<<"->";
                tmp=tmp->get_next();
            }
            cout<<endl;
        }

};
int main(){
    Linked_List tmp;
    tmp.add(45);
    tmp.add(9);
    tmp.add(4);
    tmp.print();
    return 0;
}*/






/*class Cuadrado{
    private:
        int lado;
        string color;
    public:
        Cuadrado(){}
        ~Cuadrado(){}
        void set_lado(int l){lado=l;}
        int get_lado(){return lado;}
        void set_color(string s){color = s;}
        string get_color(){return color;}

        int perimetro(){return 4*lado;}
        int area(){return lado*lado;}
};
int main(){
    Cuadrado cuadradito;
    cuadradito.set_lado(8);

    cout<<"Perimetro: "<<cuadradito.perimetro()<<endl;
    cout<<"Area: "<<cuadradito.area()<<endl;

    return 0;
}*/