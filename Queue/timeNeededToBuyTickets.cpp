#include<iostream>
#include<queue>
using namespace std;

int main(){


    int tickets[] = {1,2,3,4,5,6,7};  //we can also find the answer by adding all of the elements for finding total time until everyonw got tickets
    int n = 7;
    queue <int> q1;
    for(int i = 0; i < n ; i++){
        q1.push(i);
    }

    int time = 0;

     while(!q1.empty()){
        tickets[q1.front()]--;
        if(tickets[q1.front()]){
            q1.push(q1.front());
            q1.pop();
            time++;
        }
        else{
            q1.pop();
            time++;
        }
     }
cout<<"Time required until everyone got tickets is : "<<time<<endl;

    return 0;
}