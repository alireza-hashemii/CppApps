#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 10; // ????? ?????
    double x, element = 1.0;
    cout << "Enter a value for x: ";
    cin >> x;
    
    double factorial = 1.0;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        element += pow(x, i) / factorial;
    }
    
    cout << "e^" << x << " = " << element << endl;
    
    return 0;
}