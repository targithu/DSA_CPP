#include<iostream>
using namespace std;
 
int bubblesort(int array[],int n){
int e=n-1;
int s=0;
for(int i=1;i<n;i++){
     //for round 1 to n-1
     for(int j=0;j<n-i;j++){
         if(array[j]>array[j+1]){
           swap(array[j],array[j+1]);
         }
     }
}

 }


 int main(){
     int bubl[5]={1,4,8,6,3};
     bubblesort(bubl,5);
     return 0;
 }