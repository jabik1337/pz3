#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введіть сторони трикутника a, b, c: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
        cout << "Такий трикутник існує." << endl;
    else
        cout << "Трикутник з такими сторонами не існує." << endl;

    return 0;
}
