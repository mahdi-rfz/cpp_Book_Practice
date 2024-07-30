#include <iostream>

using namespace std;

int main(){
    int number , counter = 1;

    cout << "Enter your favorit number :";
    cin >> number;

    while(true){
        cout << counter << endl;
        
        if(counter == number){
            break;
        }

        counter = counter + 1;
    }
}