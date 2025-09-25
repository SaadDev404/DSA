#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

   

    Node(int value) : data(value){
        next = nullptr;
    }
     
};

class Queue{
    private:
    Node* front;
    Node* rear;
    public:
    
    Queue(){
        front = rear = nullptr;
    }

    bool isEmpty() 
    {return front == nullptr;
    }

   void push(int x){
    if(isEmpty()) {
        cout<<"Pushed "<< x << " into the queue"<<endl;
        front = new Node(x);
        rear = front;
        
        return;
   }
     else{
        rear->next = new Node(x);
        if(rear->next == nullptr){
            cout<<"Queue overflowed";
        }
         cout<<"Pushed "<< x << " into the queue"<<endl;
        rear = rear->next;
       
     }



}
 
   void pop(){
    if(isEmpty()){
        cout<<"Queue is underflowed"<<endl;
    }
    else{
        cout<<"Popped "<< front->data<<" from the queue"<<endl;
        Node *temp = front;     
        front = front->next;
        delete temp;
        

    }
   }   

   int start(){
    if(isEmpty()){
        cout<<"Queue is Empty";
        return -1;
    }
    else{
        return front->data;
    }
   }

};



int main(){
Queue q;
q.push(4);
q.push(5);
q.push(6);
q.push(7);
cout<<endl;
q.pop();
q.pop();
cout<< q.start()<<endl;
return 0;
}