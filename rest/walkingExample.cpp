#include<iostream>
using namespace std;

void reachHome(int src,int dest){
 //base
cout<<src<<" "<<dest<<endl;
 if(src==dest){
     cout<<"Reached"<<endl;
     return ;
 }
 src++;
 //recursive
 reachHome(src,dest);
}
int main(){
    int dest=10;
    int src=1;
    
    cout<<endl;
    reachHome(src,dest);
    return 0;
}