#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cout << "Enter x" << endl;
    cin >> x;
    cout << tan(x) << endl;
    cout << 1 + abs(x) << endl;
    cout << (1 + x*2)*4 << endl;

    if (tan(x) < 1 + abs(x) && tan(x) < (1 + x * 2) * 4)
    {
        cout << tan(x) << endl;
    }
    if (1 + abs(x)< tan(x) && 1 + abs(x)< (1 + x * 2) * 4)
    {
        cout << (1 + abs(x)) << endl;
    }
    if ((1 + x * 2) *4 < tan(x) && (1 + x * 2) < 1 + abs(x))
    {
        cout << (1 + abs(x)) << endl;
    }
  
}