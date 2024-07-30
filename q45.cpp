#include <iostream>

using namespace std;

int main(){
    int number , counter;
    counter = 1;

    cout << "Enter your favorit number :";
    cin >> number;

    while(true){
        if(counter % 2 == 1){
        cout << counter << endl;
        }
        if(number == counter){
            break;
        }
        counter = counter + 1;
    }
}