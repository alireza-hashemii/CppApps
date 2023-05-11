#include <iostream>
using namespace std;

int main() {
    int num1, num2, quotient, remainder;
    char choice;

    do {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        quotient = num1 / num2;
        remainder = num1 % num2;

        cout << "Quotient is: " << quotient << endl;
        cout << "Remainder is: " << remainder << endl;

        cout << "Do you want to check another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}