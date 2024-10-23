#include <bits/stdc++.h>
using namespace std;

int main () {
    int num = 10;
    int *ptr;
    int **p;
    ptr = &num;
    p = &ptr;

    cout << ptr << endl;
    cout << &num << endl;
    cout << num << endl;
    cout << **p << endl;

    // int arr[3] = {1, 14, 11};
    // int *p = arr;
    // cout << p << endl;
    // cout << p[0] << endl;
    // cout << p[1] << endl;
    // cout << arr[1] << endl;

}
