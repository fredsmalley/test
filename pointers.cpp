#include <iostream>

using std::cout;
using std::endl;

int sum(int& x, int& y);

int main() {
	int num = 5;
	int* p_num = &num;

	cout << "num = " << num << endl
		<< "&num = " << &num << endl
		<< "p_num = " << p_num << endl
		<< "*p_num = " << *p_num << endl;

	int (*foo)(int&, int&);
	foo = &sum;
	int x = 4;
	int y = 5;

	cout << x << " + "<< y << " = " << foo(x, y) << endl;
}

int sum(int& x, int& y) {
	return x + y;
}
