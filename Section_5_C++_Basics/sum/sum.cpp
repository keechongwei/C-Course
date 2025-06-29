#include <iostream>

using namespace std;
int main() {
    cout << " SUM OF FIRST n NATURAL NUMBERS" << endl;
    cout << "--------------------------------" << endl;
    cout << "This program calculates the sum of the first n natural numbers." << endl;
    cout << "Enter a positive integer n: ";
    int n;
    cin>>n;
    // Sum Of AP = n/2 * (first term + last term)
    // Sum of first n natural numbers = n/2 * (1 + n)
    int sum = n * (n + 1) / 2;
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    cout << "--------------------------------" << endl;
    return 0;
}