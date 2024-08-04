#include <iostream>

using namespace std;

int main(){
    int ascii_start = 65;
    int ascii_finish = 90;

    while(true){
        cout << ascii_start << endl;

        if(ascii_finish == ascii_start){
            break;
        }
    ascii_start = ascii_start + 1;
    }

}