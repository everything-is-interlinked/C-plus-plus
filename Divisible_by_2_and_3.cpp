#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a Number = ";
    cin>>number;
    
    if(number%2 == 0 && number %3 ==0){
        cout<<number<<" It is Divisble by Both 2 and 3"<<endl;
    }
    else if(number%2==0){
        cout<<number<<" It is only Divisble By 2"<<endl;
    }
    else if(number%3==0){
        cout<<number<<" It is only Divisible By 3"<<endl;
    }
    else{
        cout<<number<<" It is not divisible by both 2 and 3"<<endl;
    }
    
    return 0;
}