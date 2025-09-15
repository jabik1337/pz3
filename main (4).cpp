#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, f;
    cout << "Введіть x: ";
    cin >> x;

    if (x >= -2 && x <= 2)
        f = pow(x, 2);
    else
        f = 4 * exp(x);

    cout << "f(x) = " << f << endl;
    return 0;
}
