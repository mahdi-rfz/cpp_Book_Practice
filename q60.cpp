#include <iostream>

using namespace std;

int main(){
    int number = 0, i;

    while(true){
        cout  << endl << "Enter your number :";
        cin >> i;
        if(i < 0){
            number = number * 2;
            break;
        }
        number = number + i;
    }
    cout << endl << number << endl;
}