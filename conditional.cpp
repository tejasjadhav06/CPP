#include <iostream>
using namespace std;
int main(){

    // if(true){
    //     cout << "Hey I am from if block.";
    // }
    // else{
    //     cout << "Hey I am from else block.";
    // }

    /*
    if(condition){
      block of if 
    }
    else if(condition){
        block of if code    
    }
    else{
        block of else statement    
    }
    */
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

// Grade A: 90 to 100
// Grade B: 80 to 90
// Grade C: 70 to 80
// Grade D: 60 to 70
// Grade E: 50 to 60
// Grade F: 40 to 50
// mark < 40 : Fail
