#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    stack <int> st;
    queue<int> q1;
     q1.push(12);
     q1.push(13);
     q1.push(14);
    while(!q1.empty()){
    st.push(q1.front());
    cout<<"Pushed "<< q1.front()<<endl;
    q1.pop();
    }


    while(!st.empty()){
       q1.push(st.top());
       cout<<st.top()<<endl;
       st.pop();
    }
}
