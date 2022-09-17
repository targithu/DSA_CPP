#include<iostream>
#include<vector>
using namespace std;

 class Solution{
      void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>& ans){
          
          if(index>=nums.size()){
              ans.push_back(output);
              return;
          }
    
          solve(nums,output,index+1,ans);
        
          int element=nums[index];
          output.push_back(element);
          solve(nums,output,index+1,ans);
      }
 
    public:
     vector<vector<int>> subsets(vector<int>&nums){
          vector<vector<int>>ans;
          vector<int>output;
          int index=0;
          solve(nums,output,index,ans);
          return ans;
     }};
void solve(){

}
vector<int>ans(){

}

int main(){


 return 0;
}

// int DectoBin(int n){
// int ans=0;
// int power=1;
// while(n!=0){
//     int r=n%2;
// n/=2;
// ans+=(r*power);
// power*=10;
// }
// return ans;
// }
// int main(){
//     int arr[9]={1,2,5,4,3,6,7,98,8};
//     int subsets=pow(2,9);
//     for(int i=0;i<subsets;i++){
//         int bn=DectoBin(i);
//         int div=pow(10,8);
    
//     for(int j=0;j<9;j++){
//         int q=bn/div;
//         int r=bn%div;
//         if(q==0){
//         cout<<"-\t";
//         }else{
//             cout<<arr[j]<<"\t";
//         }
//         bn=r;
//         div/=10;
//     }
//     cout<<endl;

// }
// }