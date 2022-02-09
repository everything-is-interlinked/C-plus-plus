#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    else{
        cout<<"Only Postive Numbers Allowed !";
        cout << n << endl;
    }
    
    return 0;
}