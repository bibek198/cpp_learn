#include <iostream>
using namespace std;

int main () {
    cout << "Welcome to GST calculator !!!" << endl;

    float pencil, pen, eraser, total, gst, totalWithGst;

    cout << "Enter the pencil price : " ;
    cin >> pencil;
    cout << "Enter the pen price : ";
    cin >> pen;
    cout << "Enter the eraser price : ";
    cin >> eraser;

    total = pencil + pen + eraser;
    gst = total * 0.18;
    totalWithGst = total + gst;

    cout << "Total cost with out GST is " << total << endl;
    cout << "Total GST is " << gst << endl;
    cout << "Toatl cost with GST is " << totalWithGst << endl;

    return 0;

}