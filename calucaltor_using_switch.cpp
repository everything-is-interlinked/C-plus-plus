#include<iostream>
using namespace std;

int main(){
    float n1,n2;
    cout << "Enter A and B values = ";
    cin>>n1>>n2;
    
    char op;
    cout<<"Enter Operation to Perfrom (+,-,*,/,%)"<<endl;
    cin>>op;
    
    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
        case '%':
            cout<<n1%n2<<endl;
        default :
            cout<<"Please Enter valid Operator"<<endl;
    }
}