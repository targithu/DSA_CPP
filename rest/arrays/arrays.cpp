#include <iostream>
using namespace std;
//SWAP
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }
// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size;i+=2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// void unique(int arr[],int n){
//     for(int i;i<n;i++){
//         cout<<arr[i];
//     }
void sum(int arr[],int n){
       int k=0;
        for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
             k=k+arr[i];
} 
 cout<<"\n"<<k<<endl;
 }
int main(){
    //SWAP
    // int even[8]={5,4,3,6,7,0,1,2};
    // int odd[7]={11,33,9,76,43,2,43};
    // swapAlternate(even,8);
    // printArray(even,8);
    //SUM
    int arr[5]={8,9,79,0,9};
    sum(arr,5);

}