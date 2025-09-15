#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Введіть x: ";
    cin >> x;

    if (x < 0)
        y = tan(fabs(x));
    else if (x >= 0 && x < 5)
        y = pow(x, 3);
    else
        y = log(x) / log(5);  // log base 5

    cout << "y = " << y << endl;
    return 0;
}

