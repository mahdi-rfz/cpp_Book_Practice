#include <iostream>

using namespace std;

int main(){
    int number1 , number2;

    cout << "Enter number 1:";
    cin >> number1;
    cout << "Enter number 2:";
    cin >> number2;

    if(number1 == number2){
        cout << "Number 1 == Number 2";
        exit(0);
    }else if(number2 > number1){
        int number;
        number = number1;
        number1 = number2;
        number2 = number;
    }
    if(number2 % 2 == 1){
        number2 = number2 + 1;
    }
    number2 = number2 + 2;

    while(true){
        if(number2 >= number1){
            exit(0);
        }

        cout << number2 << endl;
        number2 = number2 + 2;
    }

}