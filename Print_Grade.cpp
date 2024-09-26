#include <iostream>
using namespace std;
int main(){

    int mark;
    cout << "Enter your Marks. Only Numbers are allowed : ";
    cin >> mark;
    if(mark > 74 && mark < 101){
        cout << "First Class with Destinction.";
    }
    else if(mark > 59 && mark < 75){   // 60 75
        cout << "First Class";
    }
    else if(mark > 39 && mark < 60){
        cout << "Second Class";
    }
    else if(mark >= 0 && mark < 40){
        cout << "Fail";
    }
    else{
        cout << "Please Enter Marks between 0 to 100 !! ";
    }
    return 0;
}