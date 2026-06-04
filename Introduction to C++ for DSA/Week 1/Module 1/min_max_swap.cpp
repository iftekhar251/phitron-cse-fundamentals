#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << "MIN :" << min(x, y) << endl;
    cout << "MAX :" << max(x, y) << endl;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}