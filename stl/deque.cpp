#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);//this is front element
for(int i:d){
    cout<<i<<" ";
}
// d.pop_back();//removes last element
// cout<<endl;
// for(int i:d){
//     cout<<i<<" ";
// }
cout<<endl;
cout<<"Print First element Index-->"<<d.at(1)<<endl;
//here even front and back methods exist,even.empty()



}