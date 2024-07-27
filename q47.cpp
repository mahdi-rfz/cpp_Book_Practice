#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter number :";
    cin >> number;
    while(true){
        if(number % 2 == 1){
            cout << number << endl;
        }
        if(number == 1){
            break;
        }
        number = number - 1;
    }
}