#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double X, Y, Z;
    cout << "Enter X" << endl;
    cin >> X;
    cout << "Enter Y" << endl;
    cin >> Y;
    cout << "Enter Z" << endl;
    cin >> Z;
    if (X > Y && Y > Z) {
        cout << pow(X, 2) << endl;
        cout << pow(Y, 2) << endl;
        cout << pow(Z, 2) << endl;
    }
    else {
        cout << -X << endl;
        cout << -Y << endl;
        cout << -Z << endl;
    }
}
