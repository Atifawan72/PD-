#include<iostream>
using namespace std;

void flowerShop(int redRose, int whiteRose, int tulip);

int main() {
    int redRose, whiteRose, tulip;

    cout << "Red Rose: ";
    cin >> redRose;
    
    cout << "White Rose: ";
    cin >> whiteRose;

    cout << "Tulips: ";
    cin >> tulip;

    flowerShop(redRose, whiteRose, tulip);

}

void flowerShop(int redRose, int whiteRose, int tulip) {
    float dis;
    float total = redRose*2.00 + whiteRose * 4.10 + tulip * 2.50;
    dis = total * 0.2;  // 20% discount

    if (total > 200) {
        cout<<"Original Price: $" <<total<<endl;
        cout << "Price after Discount: $" << total - dis;
    } else {
        cout << "Original Price: $" << total<<endl;
        cout<<"No discount applied.";
    }
}
