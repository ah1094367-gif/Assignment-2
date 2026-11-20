#include <iostream>
using namespace std;

int main() {
    int hours;
    int studentID;

    cout << "Enter parking hours: ";
    cin >> hours;

    cout << "Have valid student ID? (1 for Yes, 0 for No): ";
    cin >> studentID;

    if (studentID == 1 && hours >= 2) {
        cout << "Student Parking Discount Applicable";
    }

    return 0;
}