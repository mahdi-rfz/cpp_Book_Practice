#include <iostream>
#include <string>

using namespace std;

int main(){
    int score;
    cout << "Enter your study score :";
    cin >> score;

    string grade;

    if(score > 17){
        grade = "A";
    }
    else if(14 < score && score < 17){
        grade = "B";
    }
    else if(score < 14){
        grade = "C";
    }

    cout << endl << grade << endl;
}