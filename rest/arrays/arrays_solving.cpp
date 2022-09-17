#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
while(s<=e){
   swap(arr[s],arr[e]);
   s++;
   e--;
}
for(int j=0;j<n;j++){
    cout<<arr[j];

}
cout<<endl;
}
int main(){
    int arr[5]={1,5,8,3,9};
    reverse(arr,5);
    return 0;
}