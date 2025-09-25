// using circular queue


#include<iostream>
using namespace std;
class Queue
{
private:
   int *arr;
   int size;
   int front;
   int rear;
public:
      Queue(int n) : front(-1), rear(-1),size(n){
        arr = new int(n);
      }

      bool isFull(){
       return (rear + 1) % size == front;

      }

      bool isEmpty(){
        return front == -1;
      }


      void push(int x){
        if(isEmpty()) { front = rear = 0;
            arr[0] = x;
      }

      else if(isFull()) cout<<"Queue overflowed"<<endl;
      
      else{
      rear = (rear + 1)%size;
      arr[rear] = x;
      cout<<x<<" is pushed"<<endl;
}
    }
      
    void pop(){
        if(isEmpty()){
            cout<<"Queue is underflowed"<<endl;
        }
        else
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front + 1)%size;
            cout<<front<<" has been popped"<<endl;
        }
    }
   

    int start(){
        if(isEmpty()) {cout<<"Queue is empty";
        return -1;
        }
        else cout<<"start is ";
        return arr[front];
        
    }





};





int main(){


Queue q(5);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.pop();
cout<<endl;
q.push(6);
q.push(7);
q.pop(); 

cout<<endl;


    return 0; 
}