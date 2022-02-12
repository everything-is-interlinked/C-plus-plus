#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int number;
    
    cout << "Enter a number = ";
    cin >> number;
    
    bool flag = 0;
    
    for(int i=2;i<=sqrt(number);i++){
        if(number % 2 == 0){
            cout <<number<< " Not Prime" <<endl;
            flag = 1;
            break;
            
        }
    }
    if(flag == 0){
        cout<<number<<" Prime Number"<<endl;
    }
    return 0;
}