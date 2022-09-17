#include<iostream>
#include<stack>
using namespace std;

void SortedInsert(stack<int> &s,int num){
    //base  case
    if(s.empty() || (!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }
    int n=s.top();
    s.pop();
    //recursive call
    SortedInsert(s,num);
    s.push(n);
}
void sort(stack<int>& s){
    //base case
    if(s.empty()){
        return;
    }
    int num=s.top();
    s.pop();
    //recursive call
    sort(s);
    SortedInsert(s,num);
}