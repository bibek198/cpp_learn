#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Even and Odd !!!" << endl;
    int num;
    cout << "Enter a number : " ;
    cin >> num;

    if (num % 2 == 0) {
        cout << "Number is even." << endl;
    }
    else {
        cout << "Number is odd." << endl;
    }

    return 0;
}