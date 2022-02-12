#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    
    
    int sum=0;
    int original = n; //storing original values for comparision purpose
    
    while(n>0){
        int lastdigit = n%10; //finding lastdigit
        sum = sum + pow(lastdigit,3); //caluclating sum with power 3 of lastdigit
        n = n/10; 
    }
    
    //check whether we are getting same number as original number 
    //after cubing its sums
    
    if(sum == original){ //both cubing sum and original same
    
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong number"<<endl;
    }
    
    
}