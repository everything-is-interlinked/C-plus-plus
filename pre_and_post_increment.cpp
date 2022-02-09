#include<iostream>
using namespace std;
int main(){
    int i=1;
    int j=2;
    int k;
    
        //1  //2  //1(2)  //2(3)    //3    //4
    k = i  +  j  +  i++  +  j++  +  ++i  +  ++j;
        //15
    
    cout<<i<<" " <<j<<" "<<k<<endl;
    
    return 0;
}
