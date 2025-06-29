#include <iostream>
#include <cmath> // Required for sqrt function
using namespace std;

int main() {
    cout << "This program finds the roots of a quadratic equation using quadratic formula" << endl;
    cout << "Enter the coefficients a, b, and c of the quadratic equation ax^2 + bx + c = 0:" << endl;
    double a, b, c, r1, r2;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero for a quadratic equation." << endl;
        return 1;
    }
    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    if (b * b - 4 * a * c < 0) {
        cout << "The equation has complex roots." << endl;
    } else {
        cout << "The roots of the equation are: " << r1 << " and " << r2 << endl;
    }

    return 0;
}