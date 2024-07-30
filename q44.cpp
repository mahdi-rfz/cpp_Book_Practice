#include <iostream>

using namespace std;

int main(){
    int fnumber = 999;
    int snumber = 99;

    while(true){
        cout << fnumber << endl;

        fnumber = fnumber - 2;

        if(fnumber == snumber){
            break;
        }
    }
    return 0;
}