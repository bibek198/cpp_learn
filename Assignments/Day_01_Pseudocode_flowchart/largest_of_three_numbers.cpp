#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Largest number finder !!!" << endl;
    int num1, num2, num3;
    cout << "Enter three numbers : " << endl;
    cin >> num1 >> num2 >> num3;
    
    if (num1 > num2) {
        if (num1 > num3) {
            cout << "Largest number is " << num1 << endl;
        }
        else {
            cout << "Largest number is " << num3 << endl; 
        }
    }
    else {
        if (num2 > num3) {
            cout << "Largest number is " << num2 << endl;
        }
        else {
            cout << "Largest number is " << num3 << endl;
        }
    }

    return 0;
}