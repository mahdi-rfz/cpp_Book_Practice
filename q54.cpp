#include <iostream>

using namespace std;

int main(){
    int counter = 0;
    int finall = 100;

    while(true){
        if(counter % 2 == 0 && counter %3 == 0){
            cout << counter << endl;
        }
        counter = counter + 1;

        if(counter > 100){
            break;
        }
    }
    return 0;
}