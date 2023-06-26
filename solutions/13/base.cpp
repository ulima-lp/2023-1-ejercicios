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

        void setValue(int t){
            value=t;
        }

        int getValue(){
            return value;
        }

        void setNext(Node *t){
            next = t;
        }

        Node* getNext(){
            return next;
        }
};

class MyQueue{
    private:
        Node *root;

    public:
        MyQueue(){
            root=NULL;
        }

        ~MyQueue(){}

        bool isEmpty(){
            return root==NULL;
        }

        void enqueue(int n){
            Node *nuevo=new Node(n);
            if(root==NULL)
                root=nuevo;
            else{
                Node * tmp = root;
                while(tmp->getNext()!=NULL){
                    tmp=tmp->getNext();
                }
                tmp->setNext(nuevo);
            }
        }

        int dequeue(){
            if(!isEmpty()){
                int tmp = root->getValue();
                root=root->getNext();
                return tmp;
            }
            return 0;
        }

        void print(){
            Node* tmp = root;
            while (tmp!=NULL)
            {
                cout<<tmp->getValue()<<"->";
                tmp=tmp->getNext();
            }
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
int main(){

    return 0;

}