#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("tarun");
    s.push("s");
    s.push("hegde");
    cout<<"Top Element is->"<<s.top()<<endl;
    //even pop method exists,even size method
    cout<<"Empty or not->"<<s.empty()<<endl;


}