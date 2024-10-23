#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Average finder !!!" << endl;
    float num1, num2, num3, average;
    cout << "Enter three number : " << endl;
    cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3) / 3;
    cout << "Average of given three numbers is " << average << endl;

    return 0;
}