#include <iostream>

using namespace std;

int main(){
    int ascii_start = 97;
    int ascii_finish = 122;

    while(true){
        cout << ascii_start << endl;

        if(ascii_start == ascii_finish){
            break;
        }

        ascii_start = ascii_start + 1;
    }
}