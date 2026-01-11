#include <iostream>
using namespace std;
int main (){
    
    int teaCups;

    cout << "Enter the number of tea cups you want : ";
    cin >> teaCups;

    if (teaCups > 20){
        cout << " You got a GOLD Badge "<< endl;

    } else if (teaCups >= 10 &&  teaCups <= 20){
        cout << " You got a SILVER Badge "<< endl;
        cout << " Buy " << 20 - teaCups << " more cups to get a GOLD Badge "<< endl;
    }else {
        cout << " No Badge "<< endl;
    }

    return 0;
}