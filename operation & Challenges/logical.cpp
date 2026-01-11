#include <iostream>
using namespace std;
int main () {
    
    bool isStudent ;
    int cups ;
    cout << " Are you a Student ? (1 for Yes / 0 for No) : ";
    cin >> isStudent ;

    cout << " How many Cups have you purchased ? ";
    cin >> cups ;

    if (isStudent || cups > 15) {
        cout << " You are eligible for a 20% discount on your purchase. " << endl;
    } else {
        cout << " You are not eligible for a discount. Please Buy Cups " << endl;
    }

    return 0;
}