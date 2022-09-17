#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     while(n!=0){
     int k=n&1; //k=digit
     cout<<k;
     n=n>>1;
     //dec=binary-->(10^i*digit)+answer   digit is either 0 or 1 
     }

}