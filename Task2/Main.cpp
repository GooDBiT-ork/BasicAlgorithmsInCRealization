//Search minimal element in stack
#include<iostream>
#include<stack>

using namespace std;

int main() {

	stack<pair<int, int> > St;
	int i = 5;
	int min = i;
	for (i; i >= 0; i--) {
		if (min < i) {
			St.push(make_pair(min, i));
		}else {
			St.push(make_pair(i, i));
			min = i;
		}
		
	}
	cout << "Minimal stack element = " << St.top().first << endl;
	return 0;
}