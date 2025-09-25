#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue<int> q;
    q.push(23);
    q.push(543);
    q.push(43);
    q.pop();
    q.front();
    q.size();
    cout<<q.empty()<<endl;  
    cout<<q.back()<<endl;



    return 0;
}