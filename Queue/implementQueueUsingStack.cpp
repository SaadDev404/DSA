#include<iostream>
#include<queue>
#include<stack>

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