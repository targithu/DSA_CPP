#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;
    l.push_back(1);//even pop possible
    l.push_front(2);
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(auto i:l){
        cout<<i<<" ";
    }//even size possible
}