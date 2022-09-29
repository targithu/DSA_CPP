#include<iostream>
#include<vector>
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
int m=0;int e=arr.size()-1;
    
    while(e-m>=k){
        if(abs(arr[m]-x)<=abs(arr[e]-x)) e--;
        else if(abs(arr[m]-x)>abs(arr[e]-x)) m++;
       }
   return vector<int>(begin(arr)+m,begin(arr)+e+1);
    }
int main()
{
    vector<int>arr{3,5,7,6,1,9};
    findClosestElements(arr,4,3);
    return 0;
}