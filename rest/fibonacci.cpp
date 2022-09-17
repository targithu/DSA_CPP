#include <iostream>
using namespace std;
int fibo(int n){
    int k ;
   if(n==0)
     return 0;
   if(n==1)
       return 1;
   
   k=fibo(n-1)+fibo(n-2);
   return k;
}

int main(){
  fibo(9);
   cout<<endl;
   return 0;
}
