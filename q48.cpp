#include <iostream>

using namespace std;

int total(int numbers[]){
    int counter = 0;
    int total_number = 0;
    while(counter < 5){
        total_number = numbers[counter] + total_number;
        counter = counter + 1;
    }
    return total_number;
}

int avg(int total){
    int avg = total / 5;
    return avg;
}

int main(){
    int numbers[5];
    
    int counter = 0;
    while(counter < 5){
        cout << "enter number " << counter + 1 << " :" ;
        cin >> numbers[counter];
        counter = counter + 1;
    }
    int cache = total(numbers);

    cout << "total numbers " << cache << endl;
    cout << "average numbers " << avg(cache) << endl;
}   