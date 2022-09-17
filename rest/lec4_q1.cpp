#include <iostream>
using namespace std;
int main(){
    int n,i=0,j;
    cout<<"The value of n is: "<<endl;
    cin>>n;
    while(i<n){
        j=1;
        while(j<n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}
// to print 123..n-1
//          2.......
//          3.......
//          ........
//          ........
//          n-1..n-1