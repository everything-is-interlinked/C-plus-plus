#include<iostream>
using namespace std;

int main(){
    int principle,time,rate,SI;
    cin>>principle>>time>>rate;
    
    SI = (principle*time*rate)/100;
    
    cout<<"Simple Intrest = ";
    cout<<SI<<endl;
}