#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int F, a, b, c, x;

	cout << "Enter F" << endl;
	cin >> F;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	cout << "Enter c" << endl;
	cin >> c;
	cout << "Enter x" << endl;
	cin >> x;

	if ((x + c) < 0 && (a != 0)) {
		F = (((-a * x) * 3) - b);
	}
	else if ((x + c) > 0 && (a != 0)) {
		F = ((x - a) / (x - c));
	}
	else {
		F = (x / c) + (c / x);
	}
	cout << F;

}