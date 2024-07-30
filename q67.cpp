#include <iostream>

using namespace std;

//unsigned long int ------> 8 byte
unsigned long int pow_numbers(unsigned long int number1 , unsigned long int number2){
    unsigned long int counter = 1;
    unsigned long int na = number1;
    while(counter != number2){
        number1 = number1 * na;
        counter = counter + 1;

        cout << endl << number1 << endl;
    }
    return number1;
}

int main(){
    int number1 , number2;
    cout << "Enter number1 :";
    cin >> number1;
    cout << endl << "Enter number2 :";
    cin >> number2;

    cout << endl << pow_numbers(number1 , number2) << endl;
    return 0;
}