#include <iostream>
#include <string>
using namespace std;

int main(){
    int i = 0;
    int j = 0;
    while(i < 5){
        
        while(j < 10){
            cout << "$" ;
            j = j + 1;
        }
        cout << endl;
        j = 0;
        i = i + 1;
    }
}