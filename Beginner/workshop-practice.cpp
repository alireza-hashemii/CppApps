#include <iostream>
using namespace std;

int main() {
    float nomre;
    cout << "Enter your grade (between 0 and 20): ";
    cin >> nomre;
{

    if (nomre >= 17 && nomre <= 20) 
        cout << "Your grade is A" << endl;
     else if (nomre >= 14 && nomre <= 16) 
        cout << "Your grade is B" << endl;
     else if (nomre >= 12 && nomre <= 13) 
        cout << "Your grade is C" << endl;
     else if (nomre >= 10 && nomre <= 11) 
        cout << "Your grade is D" << endl;
     else 
        cout << "Your grade is F" << endl;
    }

    return 0;
}
