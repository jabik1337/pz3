#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    int count = 0;

    cout << "Введіть три числа: ";
    cin >> a >> b >> c;

    if (a < 0) count++;
    if (b < 0) count++;
    if (c < 0) count++;

    cout << "Кількість від’ємних чисел = " << count << endl;

    return 0;
}
