#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int result = 0;
    cin >> a >> b >> c;
    if (a > 0) {
        result = result + a;
    }
    if (b > 0) {
        result = result + b;
    }
    if (c > 0) {
        result = result + c;
    }
    cout << result << endl;
    return 0;
}
