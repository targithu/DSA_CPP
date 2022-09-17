#include<iostream>
using namespace std;

int ind(int arr[],int size){
    int s=0;
    int e=size-1;
    int k=0;
         for(int i=0;i<e;i++){//done by linear search
           if(arr[i-1]<arr[i] &&  arr[i]>arr[i+1]){
               cout<<i<<endl;
           }
           int k=i;
         }
     
      return k;
}
int main(){
    int checko[5]={1,2,4,7,2};
    ind(checko,5);
    return 0;
}













