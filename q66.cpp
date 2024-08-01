#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter your favorit number :";
    cin >> number;

    int counter = 0;
    int total = number - 1;
    while(total > 0){
        number = number * total;
        total = total - 1;
    }

    cout << endl << "! is " << number;
}