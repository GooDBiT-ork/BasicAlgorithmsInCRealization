//Ќайти наибольший индекс элемента, меньшего или равного последнему, иначе вывести -1.
#include<iostream>
#include<stack>

using namespace std;

int Solution(int SIZE, int* Arr) {
	
	int result = -1;
	stack<int> St;
	for (int i = 0; i < SIZE; i++){
		while (!St.empty() && Arr[St.top()] <= Arr[i]) {
			St.pop();
		}
		if (St.empty()) {
			result = -1;
		}else {
			result = St.top();
		}
		St.push(i);
	}
	return result;
}
int main() {

	const int SIZE = 8;
	int Arr[SIZE] = { 10,2,3,4,5,6,7,8 };
	cout << "Result = " << Solution(SIZE, Arr) << endl;

	return 0;
}
