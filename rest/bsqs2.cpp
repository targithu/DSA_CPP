#include <iostream>
using namespace std;

int occurleft(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start)+(end-start)/2;
    int count=0;
    while(start<=end){
        if(arr[mid]==key){
            end=mid-1;
            count=count+1;
        }//go to right part
        else if(key<arr[mid]){
            end=mid-1;
            count=count+1;
        }
        mid=(start)+(end-start)/2;
    }
    return count;
}
int main(){
 int res[7]={1,2,3,3,3,3,5};
 occurleft(res,7,3);
 return 0;
}