#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"The value of n is : " <<endl;
    cin>>n;
    int i=2;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

}