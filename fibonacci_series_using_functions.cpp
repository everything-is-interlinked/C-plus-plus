#include<iostream>
using namespace std;

void fib(int num){ //function decleration
    int t1=0;  //if t1 = 0 then 0
    int t2=1;  //If t2 =1 then 1 
    int next;  //for nextterm 
    
    for(int i=1;i<=num;i++){
        cout<<t1<<endl; //first t1 value
        next = t1+t2;   //fibonacci logic
        t1 = t2;  //updating the positons after result
        t2 = next; //t2 moves to next term.
        
    }
    return;
}

int main(){
    int n;
    cout<<"Enter a Number = ";
    cin>>n;
    fib(n); //function calling
    
    return 0;
}