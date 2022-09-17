#include<iostream>
using namespace std;

int dp(){

}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1);
    for(int i=0;i<=n;i++){
         dp[i]=-1;
    }
    cout<<fib(n,dp)<<endl;
    return 0;
}