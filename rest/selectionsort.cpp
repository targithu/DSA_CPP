#include<iostream>
using namespace std;
int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
         for(int j=i+1;j<n;j++){
             if(arr[j]<arr[minIndex])
              minIndex=j;
         }
         swap(arr[minIndex],arr[i]);
    }

}
int main(){
    int k[5]={9,4,3,5,1};
    selectionSort(k,5);
    return 0;
}