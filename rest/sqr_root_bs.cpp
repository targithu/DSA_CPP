#include<iostream>
using namespace std;
long long int sqrint(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n)
         return mid;
        if(square<n){
         ans=mid;
         s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double morePrecision(int n,int precision,int tempSol){
    
}

int main(){
    cin>>n;

    int tempsol=sqrint(n);

return 0;
}