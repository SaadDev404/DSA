#include<iostream>
#include<queue>
using namespace std;


class Stack{
private:
queue <int> q1;
queue <int> q2;

public:
    
bool isEmpty(){
    return q1.empty() && q2.empty();

}

void push(int x){
    if(isEmpty()){
     q1.push(x);
    }
    else{
        if(q1.empty()){
            q2.push(x);
        }
        else{
            q1.push(x);
        }
    }
}
 int pop(){
    if(isEmpty()){
        return 0;
    }
    else if(q1.empty()){
         while(q2.size()>1){
             q1.push(q2.front());
             q2.pop();
         }
         int element = q2.front();
         return element;
    }
    else{
        while(q1.size()>1){
          q2.push(q1.front());
          q1.pop();
        }
        int element = q1.front();
        return element;
    }
 }



 int top(){
    if(isEmpty()){
        return 0;
    }
    else if(q1.empty()){
        return q2.back();
    }
      else{
       return q1.back();
      }
 }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << "\n";   // 30
    cout << "Pop: " << st.pop() << "\n";           // 30
    cout << "Pop: " << st.pop() << "\n";           // 20
    cout << "Top element: " << st.top() << "\n";   // 10
    cout << "Pop: " << st.pop() << "\n";           // 10

    if (st.isEmpty())
        cout << "Stack is now empty\n";
    return 0;
}
