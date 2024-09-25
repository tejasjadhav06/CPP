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

    return 0;
}