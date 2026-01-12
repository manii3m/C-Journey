#include <iostream>
#include <string>
using namespace std;
int main (){
    
    int choices;

    cout << " Select you Tea \n";
    cout << " 1. Green Tea \n";
    cout << " 2. Black Tea \n";
    cout << " 3. Oolong Tea \n";
    cout << " Enter your Choice in Numbers : \n";

    cin >> choices;

    switch (choices) {
        case 1:
            cout << " You have selected Green Tea ( Price 2$ ) \n";
            break;
        case 2:
            cout << " You have selected Black Tea ( Price 3$ ) \n";
            break;
        case 3:
            cout << " You have selected Oolong Tea ( Price 4$ ) \n";
            break;
        default:
            cout << " Invalid Choice \n";
    }



    return 0;
}