#include <iostream>
using namespace std;
int factorial(int n){
    //basecase
    if(n == 0)
        return 1;
    int small=factorial(n-1);
    int large=n*small;
    return large;
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}