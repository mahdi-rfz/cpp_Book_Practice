#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter your number :";
    cin >> number;

    int num1 = 0;
    int num2 = 1;
    int cache_number;
    int counter = 2;

    cout << num1 << endl;
    cout << num2 << endl;

    while(true){
        cache_number = num1 + num2;
        cout << cache_number << endl;

        num1 = num2;
        num2 = cache_number;

        counter = counter + 1;

        if(counter ==  number){
            break;
            }
    }
}