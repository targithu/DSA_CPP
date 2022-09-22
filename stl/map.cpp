#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="tarun";
    m[2]="s";
    m[13]="hegde";
    m.insert({5,"kr"});
    for(auto i:m){
        cout<<i.first<<endl;
    }
    //even count exists
}