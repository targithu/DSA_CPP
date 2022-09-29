#include <iostream>
using namespace std;

void inter(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
while(j!=m){
    if(arr1[i]==arr2[j]){
      cout<<arr1[i];
      break;
  }else{ 
      i+=1;
      if(i==n){
        i=0;
        j+=1;
    }}}cout<<endl;
}
int main(){
 int arr1[8]={0,2,11,5,6,1,4,7};
 int arr2[3]={11,1,87};
 inter(arr1,8,arr2,3) ;
 return 0;
}
