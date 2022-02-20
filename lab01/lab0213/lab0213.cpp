//Староруські неметричні одиниці довжини: 1 верста = 500 саженів; 1 сажень = 3 аршина; 1 аршин = 16 вершків; 1 вершок = 44, 45 мм.
#include <iostream>

using namespace std;

int main() {
	//a- метри, b- вершок,c- аршен, d- сажень,e- верст.
	double a; cin >> a;
	double b = a / 0.04445;
	double c = b * 16;
	double d = c * 3;
	double e = d * 500;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	return 0;
}