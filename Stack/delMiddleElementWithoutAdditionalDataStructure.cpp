
// Given a stack with push (), pop (), and empty () operations, The task is to delete the middle element of it without using any additional data structure.
// Input: Stack [] = [1, 2, 3, 4, 5]
// Output: Stack [] = [1, 2, 4, 5]
// Input: Stack [] = [1, 2, 3, 4, 5, 6]
// Output: Stack [] = [1, 2, 4, 5, 6]

#include <iostream>
using namespace std;

const int Max = 100;

template <typename T>
class Stack {
private:
    T arr[Max];
    int top;

public:
    Stack() : top(-1) {}

    void push(T value) {
        if (isFull()) cout << "Oops! Stack is full\n";
        else arr[++top] = value;
    }

    T pop() {
        if (isEmpty()) {
            cout << "Oops! Stack is Empty\n";
            return T();
        }
        return arr[top--];
    }

    bool isEmpty() { return top < 0; }
    bool isFull() { return top >= Max - 1; }
    int size() { return top + 1; }

    // ✅ Give printStack friend access
    template <typename U>
    friend void printStack(Stack<U>& st);

    // ✅ Allow deleteMiddleHelper to access private members
    template <typename U>
    friend void deleteMiddleHelper(Stack<U>& st, int current, int middle);
};

// Recursive helper
template <typename T>
void deleteMiddleHelper(Stack<T>& st, int current, int middle) {
    if (st.isEmpty()) return;

    T topVal = st.pop();

    if (current != middle) {
        deleteMiddleHelper(st, current + 1, middle);
        st.push(topVal); // restore
    }
    else {
        // skip middle element
        deleteMiddleHelper(st, current + 1, middle);
    }
}

// Delete middle wrapper
template <typename T>
void deleteMiddle(Stack<T>& st) {
    int n = st.size();
    int middle = n / 2;
    deleteMiddleHelper(st, 0, middle);
}

// ✅ Outside printStack
template <typename T>
void printStack(Stack<T>& st) {
    cout << "Stack (top -> bottom): ";
    for (int i = st.top; i >= 0; i--) {
        cout << st.arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack<int> st1;
    for (int i = 1; i <= 5; i++) st1.push(i);

    cout << "Original stack:" << endl;
    printStack(st1);

    deleteMiddle(st1);
    cout << "After deleting middle:" << endl;
    printStack(st1);

    cout << endl;

    Stack<int> st2;
    for (int i = 1; i <= 6; i++) st2.push(i);

    cout << "Original stack:" << endl;
    printStack(st2);

    deleteMiddle(st2);
    cout << "After deleting middle:" << endl;
    printStack(st2);

    return 0;
}





