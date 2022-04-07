#include <iostream>
using namespace std;

int fib(int n) {
	int p1 = 0;
	int p2 = 1;
	int s = 0;
	for (int i = 0; i < n - 1; i++) {
		s = p2 + p1;
		p2 = p1;
		p1 = s;
		cout << s << endl;
	}
	return s;
}

int main() {
	int n;
	cout << "Please enter a number: ";
	cin >> n;
	fib(n);
	return 0;
}