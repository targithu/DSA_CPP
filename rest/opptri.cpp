#include <iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int row=1;
     while(row<=n){
         //space
         int space=n - row;
         while(space){
             cout<<" ";
             space=space-1;
         }
         //star
         int column=1;
         while(column<=row){
                cout<<"*";
                column=column+1;
         }
         cout<<endl;
         row=row+1;
     }

}