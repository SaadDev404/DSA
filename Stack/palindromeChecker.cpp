

 	#include<iostream>
using namespace std;
#define Max 100
class Stack {
private:
	char arr[Max];
	int top;

public:
	Stack(): top(-1){}
	void push(char value) {
		if (isFull()) cout << "Stack is full";
		else arr[++top] = value;
	}
    char pop() {
		if (isEmpty()) cout << "Stack is Empty";
		else return arr[top--];
	}
	bool isEmpty() {
		return top < 0;
	}
	bool isFull() {
		return top >= Max - 1;
	}
	int peek() {
		if (isEmpty()) cout << "Stack is empty";
		else return arr[top];
	}
};

bool isPalindrome(string sentence) {
	Stack st;
	for (int i = 0; i < sentence.length(); i++) {
		st.push(sentence[i]);

	}
	for (int i = 0; i < sentence.length(); i++) {
		char ch = st.pop();
		if (ch != sentence[i]) {
			return false;
		}


	}
	return true;
}
int main() {
	string sentence = "radar";
	if (isPalindrome(sentence)) {
		cout << "Palindrome";

	}
	else {
		cout << "Not palindrome";
	}
	return 0;
}




