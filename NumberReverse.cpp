#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: " << endl;
    cin >> n; // Entering the number

    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    } // While loop to reverse a Number

    cout << "Reversed Number = " << reversedNumber << endl; // Printing the reverse number

    return 0;
}
