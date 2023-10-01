#include<iostream>
using namespace std;

void tpChecker(int people, int tp);

int main() {
    int people, tp;
    cout << "Number of people in the household: ";
    cin >> people;
    cout << "Number of rolls of TP: ";
    cin >> tp;
    tpChecker(people, tp);
}

void tpChecker(int people, int tp) {
    int totalSheetsNeeded = people * 57;
    int totalSheetsAvailable = tp * 500;
    int days = totalSheetsAvailable / totalSheetsNeeded;

    if (days < 14) {
        cout << "Your TP will only last " << days << " days, buy more!" << endl;
    } else {
        cout << "Your TP will last " << days << " days, no need to panic!" << endl;
    }
}
