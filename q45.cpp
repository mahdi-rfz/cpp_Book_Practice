#include <iostream>

using namespace std;

int main(){
    int number , counter;
    counter = 1;

    cout << "Enter your favorit number :";
    cin >> number;

    while(true){
        cout << counter << endl;

        if(number == counter){
            break;
        }
        counter = counter + 1;
    }
}