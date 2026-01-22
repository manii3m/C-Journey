//Program for Continue Keyword in Loops

#include <iostream>
#include <string>
using namespace std;
int main (){

    string TeaTypes[5] = { "Oolong Tea", "Black Tea", "Green Tea", "White Tea", "Herbal Tea" };

    for (int i = 1 ; i < 5 ; i++ ){
        cout << "Brewing " << i << "." << TeaTypes[i] << "..." << endl;

        for ( int j = 1 ; j <=3 ; j++){
            cout << " Brewing " << j << " Cup of " << TeaTypes [i] << endl; 
        }
    }

    return 0;
   
}