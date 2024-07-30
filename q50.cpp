#include <iostream>

using namespace std;

int main(){
    int counter = 0;
    int number;
    while(number != -1){
        cout << endl <<"Enter number(-1 for exit) :";
        cin >> number;

        if(number >= 70){
            counter = counter + 1;
        }
    }

    cout << endl << counter << endl;

    return 0;
}