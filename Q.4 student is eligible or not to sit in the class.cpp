#include <iostream>
using namespace std;

int main() {
    int wd = 45;
    int absent=15, attendence;
    cout << "Enter the absent days = ";
    cin >> absent;
    attendence = (wd - absent) * 100 / wd; 
    if (attendence > 85) {
        cout << "You are eligible to sit in the class";
    } else {
        cout << "You are not eligible";
    }

}
