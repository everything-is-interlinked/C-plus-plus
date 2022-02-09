#include<iostream>
using namespace std;
int main(){
     
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    
    if(n>10){
        cout<<n<<" Greater than 10"<<endl;
    }
    else if(n<10){
        cout<<n<<" Less than 10"<<endl;
    }
    else{
        cout<<n<<" Both are same"<<endl;
    }
    
}