//Queue on two stacks
#pragma once
#include<stack>
#include<iostream>

using namespace std;

class Queue {
private:
	stack<int> addSt;
	stack<int> delSt;
public:
	Queue() {
		addSt;
		delSt;
	}
	~Queue(){
		while (!addSt.empty())
			addSt.pop();
		while (!delSt.empty())
			delSt.pop();
	}
	void push(int value) {
		addSt.push(value);
	}
	void pop() {
		if(!delSt.empty())
			delSt.pop();
		else {
			while (!addSt.empty()) {
				delSt.push(addSt.top());
				addSt.pop();
			}
			delSt.pop();
		}
	}
	void print(ostream& out) {
		stack<int> reverseSt;
		while (!delSt.empty()) {
			reverseSt.push(delSt.top());
			out << reverseSt.top() << "\t";
			delSt.pop();
		}
		while (!addSt.empty()) {
			delSt.push(addSt.top());
			addSt.pop();
		}
		while (!delSt.empty()) {
			reverseSt.push(delSt.top());
			out << reverseSt.top() << "\t";
			delSt.pop();
		}
		while (!reverseSt.empty()) {
			delSt.push(reverseSt.top());
			reverseSt.pop();
		}
	}

};