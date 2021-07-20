#include<iostream>
#include"Queue.h"
using namespace std;

int main() {

	Queue queue;
	queue.push(1);
	queue.push(2);
	queue.push(3);
	queue.push(4);
	queue.print(cout);
	cout << endl;
	queue.push(5);
	queue.pop();
	queue.print(cout);
	return 0;
}