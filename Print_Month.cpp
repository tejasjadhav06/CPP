#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter Month Number : ";
    cin >> num;
    switch(num){
        case 1:
                cout << "January";
        case 2:
                cout << "February";  
        case 3:
                cout << "March";   
        case 4:
                cout << "April";   
        case 5:
                cout << "May";       
        case 6:
                cout << "June";   
        case 7:
                cout << "July";
        case 8:
                cout << "August";
    }
}