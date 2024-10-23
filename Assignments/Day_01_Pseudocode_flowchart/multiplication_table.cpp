#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Multiplication table printer !!!" << endl;
    int num, size;
    cout << "Enter the number : " ;
    cin >> num;
    cout << "Enter the size of table : " ;
    cin >> size;
    cout << "Multiplication of " << num << " is : " << endl;
    
    for (int i = 1; i <= size; i++) {
        cout << num << " X " << i << " = " << num * i << endl;
    }

    return 0;
}