#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введіть сторони трикутника a, b, c: ";
    cin >> a >> b >> c;

    // Перевірка умови існування трикутника
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            cout << "Рівносторонній трикутник" << endl;
        else if (a == b || a == c || b == c)
            cout << "Рівнобедрений трикутник" << endl;
        else
            cout << "Різносторонній трикутник" << endl;
    } else {
        cout << "Трикутник з такими сторонами не існує!" << endl;
    }

    return 0;
}
