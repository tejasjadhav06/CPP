#include<iostream>
using namespace std;
int main(){
    int num,fact = 1;
    cout << "Enter Number : ";
    cin >> num;
    if(num == 0 || num == 1){
        cout << 1;
    }
    else{
        for(int i=num;i>0;i--){
            fact *= i;
        }
        cout << fact;
    }

    return 0;
}