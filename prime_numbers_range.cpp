#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){    // function defination
    for(int i=2;i<=sqrt(num);i++){  //prime number logic
        if(num%i == 0){ //
            return false;
        }
    }
    return true;
}


int main(){
    
    int a,b;
    cout<<"Enter Two Numbers : ";
    cin >>a>>b;
    
    for(int i=2;i<=b;i++){ 
        if(isPrime(i)){  //function calling 
            cout<<i<<endl;
        }
    }
}