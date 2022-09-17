//Cexpress in power of 2
//biggest value is till 2^31,so check till 2^30
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
   for(int i=0;i<=30;i++){
      int ans=pow(2,i);
      if(ans==n){
          cout<<"yes";
      }
      cout<<"no";
   }
     

    
}