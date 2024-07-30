#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Enter your favorit number :";
    cin >> number;

    if(number % 2 == 0){
        cout << "Your number is even" << endl;
    }
    else{
        cout << "Your number is odd" << endl;
    }

    return 0;
}