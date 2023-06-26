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
            value=t;
        }

        int get_value(){
            return value;
        }

        void set_next(Node *t){
            next = t;
        }

        Node* get_next(){
            return next;
        }
};

class My_Queue{
    private:
        Node *root;

    public:
        My_Queue(){
            root=NULL;
        }

        ~My_Queue(){}

        bool isEmpty(){
            return root==NULL;
        }

        void enqueue(int n){
            Node *nuevo=new Node(n);
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

        int dequeue(){
            if(!isEmpty()){
                int tmp = root->get_value();
                root=root->get_next();
                return tmp;
            }
            return 0;
        }

        void print(){
            Node* tmp = root;
            while (tmp!=NULL)
            {
                cout<<tmp->get_value()<<"->";
                tmp=tmp->get_next();
            }
        }
};

int main(){

    My_Queue cola;
    cola.enqueue(45);
    cola.enqueue(8);
    cola.enqueue(9);
    cola.enqueue(32);
    cola.enqueue(7);
    cola.enqueue(11);
    cola.print();
    cola.dequeue();
    cout<<"Cola modificada"<<endl;

    cola.print();

    return 0;

}