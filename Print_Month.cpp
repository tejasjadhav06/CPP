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
    }
}