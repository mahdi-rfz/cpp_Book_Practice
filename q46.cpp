#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "enter your number : ";
    cin >> number;

    int total = number;
    while(number > 0){
        number = number - 1;
        total = total + number;
    }
    cout << endl << total << endl;

    return 0;
}