#include <iostream>

using namespace std;

int useter(int number_lists[7]){
    int counter = 0;
    int upper = 0;

    while(true){
        if(number_lists[counter] > upper){
            upper = number_lists[counter];
            }
        counter = counter + 1;
        if(counter == 7){
            break;
            }
        }
    return upper;
}




int lseter(int number_lists[7]){
    int counter = 0;
    int lower = 10000000;

    while(true){
    if(number_lists[counter] < lower){
        lower = number_lists[counter];
        }
    counter = counter + 1;

    if(counter == 7){
        break;
    }
    }
    return lower;
}




int main(){
    int number_lists[7];
    int counter = 0;
    int buffer_number;
    while(counter < 7){
        cout << "Enter your number " << counter + 1 << ": ";
        cin >> buffer_number;
        number_lists[counter] = buffer_number;
        counter = counter + 1;
    }

    cout << "your upper number is " << useter(number_lists) << endl;
    cout << "your lower number is " << lseter(number_lists) << endl;
}