#include <iostream>
using namespace std;
int main (){
    
    int teabags;

    cout << "Enter the number of teabags you have : ";
    cin >> teabags;
    
    if (teabags < 10) {
        teabags = teabags + 5; // while you can also write teabags += 5;
        cout << "We have added 5 more teabags for you! cause you have less than 10 Bags" << endl;
    }

    cout << "Your total teabags are : " << teabags << endl;
    

    return 0;
}