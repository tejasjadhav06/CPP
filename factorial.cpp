#include<iostream>
using namespace std;
int findFact(int num){
    int fact=1;
    if(num == 0 || num == 1){
        return 1;
    }
    for(int i=num;i>0;i--){
            fact *= i;
        }
    return fact;
}

int main(){
    int num,fact;
    cout << "Enter Number : ";
    cin >> num;
    fact = findFact(num);
    cout << fact;
}