#include <iostream>
using namespace std;

bool search(int arr[],int size,int n){
 //basecase
 if(size==0)
     return false;
 if(arr[0]==n){
     return true;
 }else{
     bool remainingPart=search(arr+1,size-1,n);
     return remainingPart;
 }

}

int main(){
    int arr[8]={1,5,2,9,7,0,6,4};
    bool ans=search(arr,8,99);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}