#include<iostream>
using namespace std;
int main(){
    int num, fact=1;   
    cout << "Enter a Number: ";   
    cin >> num;
    for(int i=num;i>=1;i--)  
    {
        fact *= i;  
    }
    cout << fact << " ";
    return 0;
}
