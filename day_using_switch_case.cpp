#include<iostream>
using namespace std;
int main(){
    int a;
    
    cout<<"Enter a Number = ";
    cin>>a;
    
    switch(a){
        case 0:
            cout<<"Sunday"<<endl;
            break;
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        default :
            cout<<"Enter valid Input"<<endl;
    }   
}