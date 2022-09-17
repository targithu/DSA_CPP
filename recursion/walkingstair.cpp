#include <iostream>
using namespace std;

int climbstair(int n){
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    int ans=climbstair(n-1)+climbstair(n-2);
    cout<<ans<<endl;
    return ans;
}
int main(){
    climbstair(8);
    return 0;
}