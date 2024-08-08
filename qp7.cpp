#include <iostream>

using namespace std;

int main(){
    int number1 , number2;

    cout << endl << "Enter number1 :";
    cin >> number1;
    cout << endl << "Enter number2 :";
    cin >> number2;

    if(number1 > number2){
        cout << endl << "number1 > number2" << endl;
    }
    else if (number1 == number2){
        cout << endl << "number1 == number2" << endl;
    }
    else{
        cout << endl << "number1 < number2" << endl;
    }
    
    return 0;
}