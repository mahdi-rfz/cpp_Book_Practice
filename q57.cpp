#include <iostream>

using namespace std;

int main(){
    int number ;
    cout << "Enter your number : ";
    cin >> number;

    int counter0 = 0;
    int counter = 1;
    int cache;
    while(true){
        cache = number / counter;
        if(cache * counter == number){
            counter0 = counter0 + 1;
        }
        if(counter == number + 1){
            break;
        }
        counter = counter + 1;
    }
    cout << endl << counter0 << endl;
}
