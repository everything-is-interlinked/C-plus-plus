#include<iostream>
using namespace std;

int binaryTodecimal(int n){
    int ans = 0; //first 0 = 0
    int x = 1;
    
    while(n>0){
        int y = n % 10;  //for last didit
        ans = ans + x*y; 
        x = x*2;
        n = n/10; //for next second digit
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter Binary format = ";
    cin >>n;
    
    cout<<"Decimal Equivalent = "<<binaryTodecimal(n)<<endl;
}