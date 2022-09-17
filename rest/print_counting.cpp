#include <iostream>
using namespace std;

int counti(int n){
    if(n==0)
    return 0;
 cout<<n<<endl;
   counti(n-1);
}
int main(){
    int n;
    cin>>n;
    counti(n);
    
     return 0;
}