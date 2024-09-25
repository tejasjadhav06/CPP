#include<iostream>
using namespace std;
int main(){
    string name = "Tejas";
    string last = " Jadhav";
    cout << name << last;

    // Concatenation 
    cout << "\nConcatenation using + Operator: \n";
    cout << name + last << "\n";

    // Append
    cout << "Concate String using append method: ";
    cout << name.append(" Jadhav");

    // Length of string.
    cout << "\nLength of String : " << name.length();

    // Access String
    cout << "\n" << last[1];

    string fullname;
    cout << "\nEnter your Full Name: ";
    cin >> fullname;
    cout << "\nYour Name is : " << fullname;
    return 0;
}