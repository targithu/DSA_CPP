#include <iostream>
#include<vector>
using namespace std;
//as shown below always column element must be filled
bool isPresent(int arr[][4],int target,int row,int col){
 for(int row=0;row<3;row++){
     for(int column=0;column<4;column++){
         if(arr[row][column]==target){
return 1;}
}}return 0;}
int main(){
 int arr[3][4];
 for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
         cin>>arr[i][j];
     }
 }
  for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
         cout<<arr[i][j]<<" ";
     }cout<<endl;
 }
cout<<"Enter the element to search : "<<endl;
int target;
cin>>target;
if(isPresent(arr,target,3,4)){
    cout<<"Element found!"<<endl;
}

    return 0;
}