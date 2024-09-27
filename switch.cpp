#include<iostream>
using namespace std;
int main(){

   char grade;  
   cout << "Enter your Grade: ";
   cin >> grade;

   switch(grade){
    case 'A' : 
            cout << "You Score Greater than 90";
            break;
    case 'B' : 
            cout << "You Score Between 80 to 90";
            break;
    case 'C' : 
            cout << "You Score Between 70 to 80";
            break;
    case 'D' : 
            cout << "You Score Between 60 to 70";
            break;
    case 'E' : 
            cout << "You Score Between 50 to 60";
            break;
   }

}