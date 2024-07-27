#include <iostream>
using namespace std;

int main(){
    int study1 , study2 , study3 , study4 , study5;
    cout << "enter study1 score :" << endl;
    cin >> study1;
    cout << "enter study2 score :" << endl;
    cin >> study2;
    cout << "enter study3 score :" << endl;
    cin >> study3;
    cout << "enter study4 score :" << endl;
    cin >> study4;
    cout << "enter study5 score :" << endl;
    cin >> study5;

    int all = (study1 + study2 + study3 + study4 + study5) / 5;
    cout << "number average is :" << all << endl;

    return 0;
}