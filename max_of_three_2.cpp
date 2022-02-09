#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>b && a>c){
        cout<<"Max = ";
        cout<<a<<endl;
    }
    else if(b>c && b>a){
        cout<<"Max = ";
        cout<<b<<endl;
    }
    else{
        cout<<"Max =";
        cout<<c<<endl;
    }
}