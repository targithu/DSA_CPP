#include <iostream>
#include<vector>
using namespace std;
void rotate(int arr[],int step,int n){
for(int i=0;i<n;i++){
    int temp[n];
    temp[(i+step)%n]=arr[i];
}
for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
}
}
int main(){
    int arr[5]={1,2,3,4,5};
    rotate(arr,2,5);
}