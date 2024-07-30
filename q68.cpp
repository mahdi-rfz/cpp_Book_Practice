#include <iostream>

using namespace std;

int multi(int number1 , int number2){
    int counter = 1;
    int na = number1;
    while(counter < number2){
        number1 = number1 + na;
        counter = counter + 1;
    }
    return number1;
}

int main(){
    int number1 , number2;
    int counter = 0;

    cout << "Enter number1 :";
    cin >> number1;
    cout << endl << "Enter number2 :";
    cin >> number2;

    cout << endl << multi(number1 , number2) << endl;

    return 0;
}