#include<iostream>
using namespace std;

void calculateDiscount(float price, string country);

int main() {
    
        float price;
        string country;

        cout << "Enter the country's name: ";
        cin >> country;

        cout << "Enter the ticket price in dollars: $";
        cin >> price;

        calculateDiscount(price, country);
        cout << endl;
    

}

void calculateDiscount(float price, string country) {
    float discountPercentage = 0.0;

    if (country == "Pakistan") {
        discountPercentage = 5.0;
    } else if (country == "Ireland") {
        discountPercentage = 10.0;
    } else if (country == "India") {
        discountPercentage = 20.0;
    } else if (country == "England") {
        discountPercentage = 30.0;
    } else if (country == "Canada") {
        discountPercentage = 45.0;
    } 

    float discountedPrice = price - (price * discountPercentage / 100.0);
    cout << "Final ticket price after discount: $"<< discountedPrice;
}
