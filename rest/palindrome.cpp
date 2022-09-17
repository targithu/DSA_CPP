#include <iostream>
using namespace std;
bool checkin(char arr[],int n){
    int s=0;
    int e=n-1;
     int k;
    while(s<e){
        // if(arr[s]!=arr[e]){  if(arr[s]!=arr[e]){
        //    return 0;
        // }
        // else{
        //     s++;
        //     e--;
        // }
    
        if(arr[s++]==arr[e--]){
            k=1;
        }
        else{
            k=0;
        }
    }

return k;
}
int main(){
    char arr[5];
    cin>>arr;
    cout<<"Palindrome or not: "<<checkin(arr,5);
    return 0;
}