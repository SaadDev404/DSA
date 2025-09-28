#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Queue{
private:
stack <int> st1;
stack <int> st2;

public:


    bool isEmpty(){
        return st1.empty() && st2.empty();
    }

    void push (int x){
        st1.push(x);
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack is underflowed";
            return 0;
        }
        else{
            if(!st2.empty()){
             int element = st2.top();
             st2.pop();
             return element;
            }
            else{

                while(!st1.empty()){
                st2.push(st1.top());
               st1.pop();
            
               }
               int element = st2.top();
               st2.pop();
               return element;
            }
        }
    }

   int peek(){
    if(isEmpty()){
        return 0;
    }
    else{
        if(!st2.empty()){
            return st2.top();
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int element  = st2.top();
            return element;
        }
    }
   }

};





using namespace std;
int main(){
    queue <int> q;
    stack <int> st1;
    stack <int> st2;
   cout<<endl;
    
    int arr[] = {1,2,3,4,5,6,7,8};

    for(int i = 0; i < 8 ; i++ ){
        q.push(arr[i]);
    //   cout<<q.front()<<endl;
    //   q.pop();
    }

  
    


    return 0;
}