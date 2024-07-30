#include <iostream>

using namespace std;

int main(){
    int counter = 7;
    while(true){
        cout << counter << endl;
        counter = counter - 1;

        if(counter == 0){
            break;
        }
    }
    return 0;
}