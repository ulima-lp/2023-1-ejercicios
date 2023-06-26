#include <iostream>
using namespace std;

class Node{
    private:
        int value;
        Node *next;
    public:
        Node(int v){
            value = v;
            next = NULL;
        }
        ~Node(){}
        void setValue(int v){
            value = v;
        }
        int getValue(){
            return value;
        }
        void setNext(Node* t){
            next = t;
        }
        Node* getNext(){
            return next;
        }
};

class MyStack{
    private:
        Node * root;
    public:
        MyStack(){
            root=NULL;
        }
        ~MyStack(){}

        bool isEmpty(){
            return root==NULL;
        }

        void push(int N){
            Node * nuevo = new Node(N);
            if(isEmpty()){
                root=nuevo;
            }
            else{
                nuevo->setNext(root);
                root=nuevo;
            }
        }

        void print(){
            Node * tmp = root;
            while(tmp!=NULL){
                cout<<tmp->getValue()<<"->";
                tmp=tmp->getNext();
            }
        }
        int pop(){
            if(!isEmpty()){
                int tmp = root->getValue();
                root=root->getNext();
                return tmp;
            }
            return 0;
        }

        void printT(){
            if(!isEmpty()){
                MyStack aux;
                while (!this->isEmpty())
                {
                    int n=this->pop();
                    cout<<n<<"->";
                    aux.push(n);
                }

                while (!aux.isEmpty())
                {
                    this->push(aux.pop());
                }
                cout<<"NULL"<<endl;
                
                
            }
        }

};


int main()
{
    MyStack pilita;
    pilita.push(78);
    pilita.push(4);
    pilita.push(98);
    pilita.push(5);
    pilita.push(22);
    pilita.printT();
    pilita.pop();
    cout<<endl<<"Pilita modificada"<<endl;
    pilita.printT();

    return 0;
}