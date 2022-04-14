#include <iostream>
#include <cmath>

using namespace std;

int main() {
int n;

cout << "side" << endl;
cin >> n;
cout << endl;
cout << "P = " << 3 * n << endl;
cout << "h = " << (n * sqrt(3)) / 2 << endl;

cout << "R = " << (n * sqrt(3)) / 3 << endl;
cout << "r = " << (n * sqrt(6)) / 6 << endl;
return 0;
}