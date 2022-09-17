#include<iostream>
#include<stack>
using namespace std;


stack<int>pushAtBottom(stack<int>&myStack,int x){
     while(!myStack.empty()){
    int x=myStack.top();
    myStack.pop();}
    solve(myStack,count+1,x);
    myStack.push(x);
}
int main()
{
    stack<int>myStack;
    myStack.push(8);
    myStack.push(4);
    myStack.push(9);
    myStack.push(2);
    myStack.push(11);
    return 0;
}