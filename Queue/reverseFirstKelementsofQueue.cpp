#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){

   stack <int> st;
   queue <int> q1;
   int k = 3;
   q1.push(12);
   q1.push(13);
   q1.push(14);
   q1.push(15);
   q1.push(16);
   q1.push(17);
   q1.push(18);
   int x = q1.size();
  while(k--){
    st.push(q1.front());
    q1.pop();
  }

  int n = q1.size();

  while(!st.empty()){
    q1.push(st.top());
    st.pop();
  }

  while(n--){
    q1.push(q1.front());
    q1.pop();

  }

   for(int i = 0; i < x; i++){
    cout<<q1.front()<<endl;
    q1.pop();
   }

    return 0;
}