#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to Area of Rectangle !!!" << endl;
    int length, breadth, area;
    cout << "Enter the length of Rectangle : " ;
    cin >> length;
    cout << "Enter the breadth of Rectangle : " ;
    cin >> breadth;
    area = length * breadth;
    cout << "Area of Rectangle is " << area << "." << endl;

    return 0;
    
}