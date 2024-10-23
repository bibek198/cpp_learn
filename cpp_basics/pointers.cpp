#include <bits/stdc++.h>
using namespace std;

int main () {
    int num = 10;
    int *ptr;
    ptr = &num;

    cout << ptr << endl;
    cout << &num << endl;
    cout << num << endl;
    cout << *ptr << endl;

    int arr[3] = {1, 14, 11};
    int *p = arr;
    cout << p << endl;
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << arr[1] << endl;

}