#include <iostream>
#include <string>
using namespace std;
int main (){
    
    int hour ;

    cout << "Enter the current hour (0-23): ";
    cin >> hour ;

    if (hour >=9 && hour <=18){
        cout << "We are OPEN" << endl ;
    } else {
        cout << "We are CLOSED" << endl ;

    }

    return 0;
}