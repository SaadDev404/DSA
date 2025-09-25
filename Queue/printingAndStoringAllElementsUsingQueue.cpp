#include<iostream>
#include<queue>
using namespace std;



int main(){

    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    int n = q.size();
   
   
    while(n--){
        cout<<q.front()<<endl;
        q.push(q.front());
        q.pop();
    }

}