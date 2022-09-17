#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cout<<"Enter length of array:"<<endl;
    cin>>n;
     int arr[n];
    int numb;
    for(int i=0;i<n;i++){
     int arr[n];
     cout<<"Enter value: "<<endl;
     cin>>arr[i];}
     cout<<"Enter number to be found:"<<endl;
    cin>>numb;
    for(int i=0;i<n;i++){
     for(int k=0;k<i;k++){
         if(arr[i]==numb){
             if(arr[k]==numb){
                 cout<<k<<endl;;
             }
             else{
                 cout<<i<<endl;;
             }}
          else{
              cout<<-1<<endl;;
          }
         }
    }
     return  0;
    }

