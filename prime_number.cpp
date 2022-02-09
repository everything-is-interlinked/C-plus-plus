#include<iostream>
using namespace std;

int main(){
    int i,num;
    bool isprime = true;
    
    cout<<"Enter a Number = ";
    cin>>num;
    
    //condition for if number is 0 or 1 
    
    if(num == 0 || num == 1){
        isprime = false;
    }
    else{
        for(i = 2 ; i <= num / 2; ++i){
            if(num % i == 0){
                isprime = false;
                break;
            }
        }
    }
    if(isprime){
        cout<<num<<" Prime Number";
    }
    else{
        cout<<num<<" Not a Prime Number";
    }

}