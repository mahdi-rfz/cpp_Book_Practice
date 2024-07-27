#include<iostream>
#include<string>

using namespace std;

int sortNumbers(int numbers[]){
    int biger , ses1 , counter = 0;
    
    while(counter < 7){
    int buffer_number = numbers[counter];
    if(buffer_number > biger){
        biger = buffer_number;
    }
    counter = counter + 1;
    }
    return biger;

}

int main(){
    int numbers[7] = {};
    int counter = 0;
    int input_number;
    while(counter < 7){
        cout << "Enter number " << counter + 1 << ":";
        cin >> input_number; 
        numbers[counter] = input_number;
        counter = counter + 1;
    }
    cout << endl << sortNumbers(numbers) << endl;

    return 0;
}