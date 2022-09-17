#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j;j<=n;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
}
    return 0;
}
//if n=5,observer that 1 in place where row+column is even
// 1
// 01
// 101
// 0101
// 10101