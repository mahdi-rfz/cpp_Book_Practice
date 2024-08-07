#include <iostream>

using namespace std;

int main(){
    int number ;
    cout << "Enter your number : ";
    cin >> number;

    int counter = 1;
    int cache;
    while(true){
        cache = number / counter;
        if(cache * counter == number){
            cout << counter << endl;
        }
        if(counter == number + 1){
            break;
        }
        counter = counter + 1;
    }
    
}