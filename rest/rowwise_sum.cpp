#include <iostream>
#include<vector>
using namespace std;
void rowsum(int arr[][3],int row,int col){
 for(row=0;row<3;row++){
       int sum=0;
     for(col=0;col<3;col++){
         sum+=arr[row][col];
     }
    cout<<sum<<" ";
    }cout<<endl;
}
void largestrowsum(int arr[][3],int row,int col){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(row=0;row<3;row++){
       int sum=0;
     for(col=0;col<3;col++){
         sum+=arr[row][col];
     }
       if(sum>maxi) {
        rowIndex=row;
        maxi=sum;
    }
     }
     cout<<"the maximum sum is "<<maxi<<endl;
     return rowIndex;
}
int main(){
int arr[3][3];
     for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
         cin>>arr[i][j];
     }
 }
 rowsum(arr,5,3);
 cout<<"Max row is at index"<<largestrowsum(arr,3,3)<<endl;
 return 0;

}