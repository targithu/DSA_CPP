#include <iostream>
#include<cmath>
using namespace std;
int rec(int n){
  if(n==0)
      return 1;
  
  int k=rec(n-1);
  int m=2*k;

   return m;
}

int main(){
    int n;
    cin>>n;
    int ans=rec(n);
    cout<<ans<<endl;
     return 0;
}