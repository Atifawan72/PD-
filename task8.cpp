#include<iostream>
using namespace std;

void pet(int holidays);

int main() {
    int holidays;
    cout << "Holidays: ";
    cin >> holidays;
    pet(holidays);

    return 0;
}

void pet(int holidays) {
    int totalGameTime = 30000;
    int wkdays = 365 - holidays;
    int timeForPlay = wkdays * 63 + holidays * 127;
    int difference = totalGameTime - timeForPlay;
    int dif=timeForPlay-totalGameTime;
    int playHours = difference / 60;
    int playMinutes = difference % 60;
    int playhrs=dif/60;
    int playmn=dif%60;
    if (totalGameTime >= timeForPlay ) {
        cout << "Tom sleeps well" << endl;
        cout << playHours << " hours and " << playMinutes << " minutes less for play";
    } else {
        cout << "Tom will run away" << endl;
        cout<< playhrs << " hours and " << playmn << " minutes for play";
    }
}
