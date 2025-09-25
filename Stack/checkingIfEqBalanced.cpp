
#include <iostream>
using namespace std;

#define Max 100   // maximum size of stack

class Stack {
private:
    char a[Max];  // array to hold stack elements
    int top;      // index of top element
public:
    Stack() : top(-1) {}   // constructor initializes empty stack

    bool isEmpty() {
        return top < 0;
    }

    bool isFull() {
        return top >= Max - 1;
    }

    void push(char value) {
        if (isFull()) {
            cout << "Stack is full\n";
        }
        else {
            a[++top] = value;
        }
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return '\0';
        }
        else {
            return a[top--];
        }
    }

    char peek() {   // to check top element without popping
        if (isEmpty()) return '\0';
        return a[top];
    }
};

bool balanced(string expr) {
    Stack st;
    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        // push opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        // handle closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.isEmpty()) return false; // no matching opening
            char topChar = st.pop();
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;  // mismatch
            }
        }
    }

    return st.isEmpty(); // must be empty if balanced
}

int main() {
    string a = "((a+b)*(c-d))";

    if (balanced(a))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}


