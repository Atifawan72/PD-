#include<iostream>
using namespace std;

void longestTime(int hour, int min);

int main() {
    int hour, min;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> min;

    longestTime(hour, min);

    return 0;
}

void longestTime(int hour, int min) {
    int total = hour * 60 ;

    if (total> min) {
        cout << hour<<endl;
    } else {
        cout << min << endl;
    }
}
