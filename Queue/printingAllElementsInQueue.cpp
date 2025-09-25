#include<iostream>
using namespace std;
class Queue{
private:
int rear; 
int front;
int size;
int *arr;

public:
Queue(int n) : rear(-1), front(-1), size(n){
     arr = new int [n];
}

    bool isEmpty(){
        return front == -1;
    }
    bool isFull(){
        return rear>= size-1;
    }

   void push(int n){
    if(isFull()){
        cout<<"Queue is overflowed";
    }
    else if(isEmpty()){
     rear = front = 0;
     arr[0] = n;
    }

    else{
        rear = rear + 1;
        arr[rear] = n;
        cout<<n << " is pushed";
    }



   }

   void pop(){
    if(isEmpty()){
        cout<<"Queue is underflowed";
    }
    else{
        if(front == rear){
            front = rear = -1;
        }else{
            front = front +1;
             cout<<front <<" has been popped"<<endl;
        }
    }
   }
   
   int start(){
    if(isEmpty()){
        cout<<"Queue is underflowed";
       return -1;
    }
    else{
        cout<<"Array's front is : ";
        return arr[front];
    }
   }


   void printAll(){
    if(isEmpty()){
        cout<<"Queue underflowed";
    }
    for(int i = front; i <= rear; i++ ){
      cout<<arr[i]<<endl;
    }
   }
};


int main(){

    Queue q1(4);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);


   cout<<"Now printing array"<<endl;

   q1.printAll();


    return 0;
}