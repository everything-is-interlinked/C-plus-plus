#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>b){
        if(a>c){
            cout<<"Max = ";
            cout<<a<<endl;    
        }
        else{
            cout<<"Max = ";
            cout<<c<<endl;
        }
        
    }
    else{
        if(b>c){
            cout<<"Max = ";
            cout<<b<<endl;
        }
        else{
            cout<<"Max = ";
            cout<<c<<endl;
        }
    }
}