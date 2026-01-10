#include<iostream>
using namespace std;
int main (){
    
    int cups;
    double price_per_cup, total_cost, discounted_price;
1
    cout << "Enter the number of cups : ";
    cin >> cups;

    cout << "Enter the price per cup : ";
    cin >> price_per_cup;

    total_cost = cups * price_per_cup;

    // applying 5% discount if total price is above 100

    if (total_cost > 100) {
        discounted_price = total_cost - (total_cost * 0.05);
        cout << "Total cost after discount is : " << discounted_price << endl;
    } else {
        cout << "Total cost is : " << total_cost << endl;
    }

    

    return 0;
}