// program for not to include that divsible numbers

#include<iostream>
using namespace std;

int main(){
    int dnum;
    cin>>dnum;
    
    for(int i=0;i<=100;i++){
        if(i%dnum==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}