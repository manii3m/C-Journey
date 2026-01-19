//program for FOR loop

#include <iostream>
#include <string>
using namespace std;
int main (){

    int cups = 5;

    for (int i = 1 ; i <= cups ; i ++){
        cout << "Brewing cup "<< i << " of coffee." << endl;
    }

    cout << "Out of Loop" << endl;

    return 0;
   
}