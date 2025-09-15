#include <iostream>
#include <cmath>  // для M_PI

using namespace std;

int main() {
    int n;
    double a, b, h, R, S;

    cout << "Введіть номер фігури (1 - прямокутник, 2 - трикутник, 3 - трапеція, 4 - коло): ";
    cin >> n;

    switch(n) {
        case 1:  // прямокутник
            cout << "Введіть a і b: ";
            cin >> a >> b;
            S = a * b;
            break;

        case 2:  // трикутник
            cout << "Введіть a і h: ";
            cin >> a >> h;
            S = (a * h) / 2.0;
            break;

        case 3:  // трапеція
            cout << "Введіть a, b і h: ";
            cin >> a >> b >> h;
            S = ((a + b) / 2.0) * h;
            break;

        case 4:  // коло
            cout << "Введіть R: ";
            cin >> R;
            S = M_PI * R * R;
            break;

        default:
            cout << "Невірний номер фігури!" << endl;
            return 0;
    }

    cout << "Площа = " << S << endl;

    return 0;
}

