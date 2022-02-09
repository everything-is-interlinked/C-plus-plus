#include<iostream>
using namespace std;
int main(){
    int i = 0;
    
    // 0       //0     //1     //1
    
    i = i++  -  --i  +  ++i  -  i--;
    //0    
    
    cout<<i<<endl;
}