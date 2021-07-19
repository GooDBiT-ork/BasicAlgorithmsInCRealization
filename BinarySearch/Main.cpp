#include<iostream>

using namespace std;

bool binarySearch(const int, const int, int*);

int main(){
	const int SIZE = 10;
	const int VALUE = 10;
	int exampleArray[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

	if (binarySearch(SIZE, VALUE, exampleArray))
		cout << "\t+" << endl;
	else
		cout << "\t-" << endl;

	system("pause");
	return 0;
}