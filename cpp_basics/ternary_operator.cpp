#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to ternary operator !!!" << endl;
    int ans, num1, num2;
    // int num1, num2;
    cout << "Enter numb1 : ";
    cin >> num1;
    cout << "Enter numb2 : ";
    cin >> num2;
    ans = (num1 > num2) ? num1 : num2;
    cout << "Better choice is : " << ans << endl;
    // cout << "Better chice is : " << ((num1 > num2) ? num1 : num2) << endl;

    return 0;
}