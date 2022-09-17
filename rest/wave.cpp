#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<int> arr, int nRows,int mCols){
    vector<int> ans;
    for(int i=0;i<mCols;i++){
if(i&1){
for(int j=nRows-1;j>=0;j--){
    cout<<arr[i][j]<<" ";
     ans.push_back(arr[i][j]);
}
}
    else{
        for(int j=0;j<nRows;j++){
              cout<<arr[i][j]<<" ";
              ans.push_back(arr[i][j]);
    }}
    }
}

int main(){
    
return 0;
}