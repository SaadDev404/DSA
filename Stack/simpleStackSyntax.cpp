// 👉 Write a program that:

// Creates a stack of integers (size 3).

// Pushes values 10, 20, 30.

// Attempts to push 40 (should display "Stack is full").

// Pops all elements and prints them.



#include<iostream>
using namespace std;
const int Max = 3;

template<typename T>

class Stack {
private:
    int arr[Max];
    int top;
public:

    Stack() : top(-1) {
        for (int i = 0; i < Max; i++) {
            arr[i] = 0;
        }
    }

    void push(T value) {
        if (isFull()) {
            cout << "Oops! Stack is full";
        }
        else arr[++top] = value;
    }
    T pop() {
        if (isEmpty()) {
            cout << "Oops! Stack is Empty";
            return T();
        }
        else return arr[top--];
    }
    T peek() {
        if (isEmpty()) {
            cout << "Stack is Empty ";
        }
        else return top;
    }

    bool isEmpty() {
        return top < 0;
    }
    bool isFull() {
        return top >= Max - 1;
    }


};
int main() {

    Stack <int>obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);

    cout << endl;
    cout << obj.peek()<<endl;

    cout << "Poping" << endl;
    cout << obj.pop();
    cout<< endl;
    cout << obj.pop();

    cout << endl;
    cout << obj.pop();

    cout << endl;
    cout<<obj.pop();
    system("pause");
    return 0;
}






