#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    //SUM OF NUMBERS TILL N
//           int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=i+sum;
//     }
//   cout<<sum<<endl;
     //Fibonacci Series
    //  for(int i=1;i<=n;i++){
    //      int nextNumber=a+b;
    //      cout<<nextNumber<<" ";
    //      a=b;
    //      b=nextNumber;
     //}
     //Prime
     bool isPrime=1;
     for(int i=2;i<n;i++){
       
             if(n%i==0){
                isPrime=0;
                break;
             }  
     }
     if(isPrime==0){
         cout<<"Not a Prime Number"<<endl;
     }
     else{
         cout<<"is a Prime Number"<<endl;
     }

}
