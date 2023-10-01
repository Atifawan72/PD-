#include<iostream>
using namespace std;

void reverse(string c);

int main() {
    string c;
    cout << "Enter 'true' or 'false': ";
    cin >> c;
    reverse(c);

    return 0;
}

void reverse(string c) {
    if (c == "true") {
        cout << "false";
    } else {
        cout << "true";
    }
}
