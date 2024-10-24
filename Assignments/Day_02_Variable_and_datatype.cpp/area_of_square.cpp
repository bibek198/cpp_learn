#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to area of Rectangle !!!" << endl;
    int length, breadth, area;
    cout << "Enter the length : " ;
    cin >> length;
    cout << "Enter the breadth : " ;
    cin >> breadth;
    area = length * breadth;
    cout << "Area of rectangle is " << area << "." << endl;

    return 0;
}