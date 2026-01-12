#include <iostream>
#include <string>
using namespace std;
int main (){
    
    int orders;
    int pricePerCup = 5 ;
    double totalPrice , discount ;

    cout << " Enter the Number of TeaCups you Orders : ";
    cin >> orders ;


    int billAmount = orders * pricePerCup ;

    cout << " Total Cost is : " << billAmount << endl ; 


    if ( orders > 20 ){
        cout << " You got 20% Discount " << endl ;
        cout << " Total Bill after Discount is : " << billAmount - (billAmount * 0.2) << endl ;
    }else if ( orders >=10 && orders <20){
        cout << " You got 10% Discount " << endl ;
        cout << " Total Bill after Discount is : " << billAmount - (billAmount * 0.1) << endl ;
    }else{
        cout << " No Discount " << endl ;
    }


    return 0;
}