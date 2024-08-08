#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter your number :";
    cin >> number;

    if(number > 0){
        cout << endl << "number = +" << endl;
    }
    else if(number == 0){
        cout << endl << "number = 0" << endl;
    }
    else{
        cout << endl << "number = -" << endl; 
    }

    return 0;
} 