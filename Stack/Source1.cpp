//#include<iostream>
//using namespace std;
//#include <iostream>
//const int Max = 100;
////
//template<typename T>
//
//class Stack {
//private:
//    int arr[Max];
//    int top;
//public:
//
//    Stack() : top(-1) {
//        for (int i = 0; i < Max; i++) {
//            arr[i] = 0;
//        }
//    }
//
//    void push(T value) {
//        if (isFull()) {
//            cout << "Oops! Stack is full";
//        }
//        else arr[++top] = value;
//    }
//    T pop() {
//        if (isEmpty()) {
//            cout << "Oops! Stack is Empty";
//            return T();
//        }
//        else return arr[top--];
//    }
//    T peek() {
//        if (isEmpty()) {
//            cout << "Stack is Empty ";
//        }
//        else return top;
//    }
//    int size() { return top + 1; }
//    bool isEmpty() {
//        return top < 0;
//    }
//    bool isFull() {
//        return top >= Max - 1;
//    }
//
//
//};
//int main() {
//
//    Stack <int>obj;
//    obj.push(10);
//    obj.push(20);
//    obj.push(30);
//    obj.push(40);
//
//    cout << endl;
//    cout << obj.peek()<<endl;
//
//    cout << "Poping" << endl;
//    cout << obj.pop();
//    cout<< endl;
//    cout << obj.pop();
//
//    cout << endl;
//    cout << obj.pop();
//
//    cout << endl;
//    cout<<obj.pop();
//    system("pause");
//    return 0;
//}



  
///////////////////////        TASK            2           ////////////////////////



//#include<iostream>
//using namespace std;
//const int Max = 3;
//class Stack {
//private:
//    int arr[Max];
//    int top;
//
//
//public:
//
//    Stack() : top(-1) {}
//    void push(int value) {
//        if (isFull()) cout << "Oops! stack is Full";
//        else {
//            arr[++top] = value;
//        }
//    }
//
//    int pop() {
//        if (isEmpty()) {
//            cout << "Ops! Stack is empty";
//            return 0;
//        }
//        else {
//            return arr[top--];
//        }
//    }
//
//    int peek() {
//        if (isEmpty()) {
//            cout << "Stack is empty";
//            return 0;
//        }
//        else {
//            return top;
//        }
//    }
//
//    bool isFull() {
//        return top >= Max - 1;
//    }
//
//    bool isEmpty() {
//        return top < 0;
//    }
//
//
//
//};
//int main() {
//    Stack  obj;
//    obj.push(10);
//    cout << endl;
//    obj.push(10);
//    cout << endl;
//    obj.push(10);
//    cout << endl;
//    obj.push(10);
//    cout << endl;
//    cout << obj.peek();
//    cout << endl;
//   cout<< obj.pop();
//    cout << endl;
//    cout << obj.pop();
//    cout << endl;
//
//    cout << obj.pop();
//    cout << endl;
//    cout << obj.pop();
//    cout << endl;
//    cout << endl;
//    cout << endl;
//
//
//    return 0;
//}




///////////////////////         TASK            3           ////////////////////////

//#include <iostream>
//using namespace std;
//
//#define Max 100   // maximum size of stack
//
//class Stack {
//private:
//    char a[Max];  // array to hold stack elements
//    int top;      // index of top element
//public:
//    Stack() : top(-1) {}   // constructor initializes empty stack
//
//    bool isEmpty() {
//        return top < 0;
//    }
//
//    bool isFull() {
//        return top >= Max - 1;
//    }
//
//    void push(char value) {
//        if (isFull()) {
//            cout << "Stack is full\n";
//        }
//        else {
//            a[++top] = value;
//        }
//    }
//
//    char pop() {
//        if (isEmpty()) {
//            cout << "Stack is empty\n";
//            return '\0';
//        }
//        else {
//            return a[top--];
//        }
//    }
//
//    char peek() {   // to check top element without popping
//        if (isEmpty()) return '\0';
//        return a[top];
//    }
//};
//
//bool balanced(string expr) {
//    Stack st;
//    for (int i = 0; i < expr.length(); i++) {
//        char ch = expr[i];
//
//        // push opening brackets
//        if (ch == '(' || ch == '{' || ch == '[') {
//            st.push(ch);
//        }
//        // handle closing brackets
//        else if (ch == ')' || ch == '}' || ch == ']') {
//            if (st.isEmpty()) return false; // no matching opening
//            char topChar = st.pop();
//            if ((ch == ')' && topChar != '(') ||
//                (ch == '}' && topChar != '{') ||
//                (ch == ']' && topChar != '[')) {
//                return false;  // mismatch
//            }
//        }
//    }
//
//    return st.isEmpty(); // must be empty if balanced
//}
//
//int main() {
//    string a = "((a+b)*(c-d))";
//
//    if (balanced(a))
//        cout << "Balanced\n";
//    else
//        cout << "Not Balanced\n";
//
//    return 0;
//}





///////////////////////         TASK            4           ////////////////////////

//palindrome checker

//#include<iostream>
//using namespace std;
//#define Max 100
//class Stack {
//private:
//	char arr[Max];
//	int top;
//
//public:
//	Stack(): top(-1){}
//	void push(char value) {
//		if (isFull()) cout << "Stack is full";
//		else arr[++top] = value;
//	}
//    char pop() {
//		if (isEmpty()) cout << "Stack is Empty";
//		else return arr[top--];
//	}
//	bool isEmpty() {
//		return top < 0;
//	}
//	bool isFull() {
//		return top >= Max - 1;
//	}
//	int peek() {
//		if (isEmpty()) cout << "Stack is empty";
//		else return arr[top];
//	}
//};
//
//bool isPalindrome(string sentence) {
//	Stack st;
//	for (int i = 0; i < sentence.length(); i++) {
//		st.push(sentence[i]);
//
//	}
//	for (int i = 0; i < sentence.length(); i++) {
//		char ch = st.pop();
//		if (ch != sentence[i]) {
//			return false;
//		}
//
//
//	}
//	return true;
//}
//int main() {
//	string sentence = "radar";
//	if (isPalindrome(sentence)) {
//		cout << "Palindrome";
//
//	}
//	else {
//		cout << "Not palindrome";
//	}
//	return 0;
//}








///////////////////////         TASK             5           ////////////////////////
//



//
//
//
//#include <iostream>
//using namespace std;
//
//const int Max = 100;
//
//template <typename T>
//class Stack {
//private:
//    T arr[Max];
//    int top;
//
//public:
//    Stack() : top(-1) {}
//
//    void push(T value) {
//        if (isFull()) cout << "Oops! Stack is full\n";
//        else arr[++top] = value;
//    }
//
//    T pop() {
//        if (isEmpty()) {
//            cout << "Oops! Stack is Empty\n";
//            return T();
//        }
//        return arr[top--];
//    }
//
//    bool isEmpty() { return top < 0; }
//    bool isFull() { return top >= Max - 1; }
//    int size() { return top + 1; }
//
//    // ✅ Give printStack friend access
//    template <typename U>
//    friend void printStack(Stack<U>& st);
//
//    // ✅ Allow deleteMiddleHelper to access private members
//    template <typename U>
//    friend void deleteMiddleHelper(Stack<U>& st, int current, int middle);
//};
//
//// Recursive helper
//template <typename T>
//void deleteMiddleHelper(Stack<T>& st, int current, int middle) {
//    if (st.isEmpty()) return;
//
//    T topVal = st.pop();
//
//    if (current != middle) {
//        deleteMiddleHelper(st, current + 1, middle);
//        st.push(topVal); // restore
//    }
//    else {
//        // skip middle element
//        deleteMiddleHelper(st, current + 1, middle);
//    }
//}
//
//// Delete middle wrapper
//template <typename T>
//void deleteMiddle(Stack<T>& st) {
//    int n = st.size();
//    int middle = n / 2;
//    deleteMiddleHelper(st, 0, middle);
//}
//
//// ✅ Outside printStack
//template <typename T>
//void printStack(Stack<T>& st) {
//    cout << "Stack (top -> bottom): ";
//    for (int i = st.top; i >= 0; i--) {
//        cout << st.arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    Stack<int> st1;
//    for (int i = 1; i <= 5; i++) st1.push(i);
//
//    cout << "Original stack:" << endl;
//    printStack(st1);
//
//    deleteMiddle(st1);
//    cout << "After deleting middle:" << endl;
//    printStack(st1);
//
//    cout << endl;
//
//    Stack<int> st2;
//    for (int i = 1; i <= 6; i++) st2.push(i);
//
//    cout << "Original stack:" << endl;
//    printStack(st2);
//
//    deleteMiddle(st2);
//    cout << "After deleting middle:" << endl;
//    printStack(st2);
//
//    return 0;
//}
//
//






//                    Palindrome Checker /////////////


//
//
//#include<iostream>
//using namespace std;
//#define Max 100
//class Stack {
//private:
//	int top;
//	char arr[Max];
//
//
//
//public:
//	Stack() : top(-1) {};
//	bool isFull() {
//		return top >= Max-1;
//	}
//	bool isEmpty() {
//		return top < 0;
//	}
//	int push(int value) {
//		if (isFull()) return 0;
//		else {
//			return arr[++top] = value;
//		}
//	}
//	int pop() {
//		if (isEmpty()) {
//			cout << "Oops! Stack is Empty";
//			return 0;
//		}
//		else {
//		return	arr[top--];
//		}
//	}
//};
//
//bool isPalindrome(string exp) {
//	Stack st;
//	for (int i = 0; i < exp.length(); i++)
//		st.push(exp[i]);
//
//
//	for (int i = 0; i < exp.length(); i++) {
//		char c = st.pop();
//		if (c != exp[i]) {
//			return false;
//		}
//
//
//	}
//	return true;
//
//
//}
//
//
//
//
//int main() {
//	char choice;
//
//	do {
//		string expp;
//		cout << "Please enter expression to check palindrome: ";
//		cin >> expp;
//
//		if (isPalindrome(expp)) {
//			cout << expp << " is a palindrome\n";
//		}
//		else {
//			cout << expp << " is NOT a palindrome\n";
//		}
//
//		cout << "\nDo you want to check again? (Y/N): ";
//		cin >> choice;
//
//	} while (choice == 'Y' || choice == 'y');
//
//	cout << "Goodbye!\n";
//	return 0;
//}





///////////                     QUEUE TASKS                //////////////////////////


//                               TASK no 1                   ////////////////////////


#include<iostream>
using namespace std;
class Queue {
private:
	int front,rear,size;

	int* arr;
	

public:
	Queue(int n) : front(-1), rear(-1), size(n) {
		arr = new int [n];
	}

	bool isEmpty() {
		return front == -1;
	}

	bool isFull() {
		return rear = size - 1;
	}


	int push(int x) {
		if (isEmpty()) {
			front = rear = 0;
			arr[0] = x;
		}
		else if (isFull()) {
			if (isFull()) cout << "Queue overflow";
			return 0;
		}
		else
			arr[++rear] = x;
		return;
	}
	int pop() {
		if (isEmpty()) {
			cout << "Queue underflow";
			return;
		}
		else {
			if(front > rear) {
			front = rear = -1;
		    }
		    else {
				front = front + 1;
		}
		}
	}
	int start() {
		if (isEmpty()) return -1;
		else return arr[front];
	}


};


int main() {

}