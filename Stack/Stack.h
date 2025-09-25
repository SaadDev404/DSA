//#pragma once
//#include<iostream>
//using namespace std;
//const int Max = 2;
//
//template <typename T>
//class Stack {
//private:
//	T arr[Max];
//	int top;
//public:
//
//	Stack() : top(-1) {
//
//
//	}
//
//	bool isFull() {
//		return	top >= Max - 1;
//	}
//
//
//	bool isEmpty() {
//		return	top < 0;
//	}
//
//	void push(T value) {
//		if (isFull()) cout << "Stack is full";
//		else arr[++top] = value;
//	}
//
//	T pop() {
//		if (isEmpty()) {
//			cout << "Stack is empty" << endl;
//
//			return T();
//		}
//		else return arr[top--];
//
//
//	}
//
//	T peek() {
//		if (isEmpty()) cout << "Stack is empty" << endl;
//		else
//			return T();
//	}
//
//
//};
//
//
