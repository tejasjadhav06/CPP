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
   }

}