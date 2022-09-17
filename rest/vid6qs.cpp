#include<iostream>
using namespace std;
int main(){
    //DIGIT PRODUCT-SUM
    // int n;
    // cin>>n;
    // int prod=1;
    //     int sum=0;
    // while(n!=0){
    //  int digit=n%10;
    //  prod=prod*digit;
    //  sum=sum+digit;
    //  n=n/10;
    // }
    // int ans =prod - sum;
    // cout<< ans;
    //Number of 1 BITS
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;//right shift
    }
    cout<<count<<endl;
}
