#include<iostream>
using namespace std;
bool isPrime(int num){

    if(num <= 1){
        return false;
    }

    for(int i=2;i<num;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int num;
    cout<< "Enter Number : ";
    cin >> num;
    if(isPrime(num)){
        cout<< "Prime Number";
    }
    else{
        cout<<"Not Prime";
    }
}