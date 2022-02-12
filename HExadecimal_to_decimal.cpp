#include <bits/stdc++.h> // inclueds all header files
using namespace std;

int hexadecimalTodecimal(string n){
    int ans = 0; //first one
    int x = 1 ; //base
    
    int s= n.size();
    for(int i=s-1;i>=0;i--){ //1 to last postion - 1 
        if(n[i]>='0' && n[i]<='9'){
            ans = ans + x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <='F'){
            ans = ans + x*(n[i]-'A' + 10);
        }
        x=x*16; //base 16 Hexadeciaml
        
    }
    return ans;
}

int main(){
    string n;
    cout<<"Enter Hexadeciaml Number = ";
    cin >> n;
    cout<<hexadecimalTodecimal(n)<<endl;
}
