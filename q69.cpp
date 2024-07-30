#include <iostream>

using namespace std;

int main(){
    int cache_number;
    int counter = 0;
    while(cache_number != -1){
        cout << "Enter your number(-1 for exit) :";
        cin >> cache_number;

        if(cache_number > 70){
            counter = counter + 1;
        }
        
    }
    cout << "counter is " << counter << endl;
    return 0;
}