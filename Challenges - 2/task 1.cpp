#include <iostream>
#include <string>
using namespace std;
int main (){
     string teaOrder;

     cout << "Enter your tea order: ";
     getline(cin , teaOrder);

     if ( teaOrder == "Green Tea"){
        cout << "You have ordered a GREEN TEA" << endl ;
     } else {
        cout << " Get Out of here " << endl ;
     }


    return 0;
}