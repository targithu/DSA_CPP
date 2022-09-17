#include<iostream>
#include<stack>
using namespace std;

void Bottom(stack<int>& inputStack,int number){
    int tops;
    // base case
   if(inputStack.empty()){
    inputStack.push(number);
    return ;
    }
   
    tops=inputStack.top();
    inputStack.pop();
   //recursive call
   Bottom(inputStack,number);
   inputStack.push(tops);
}
void print(stack<int>& s){
    int n=s.size();
        while (!s.empty()) {
        cout << ' ' << s.top();
        s.pop();
    }
}
int main(){
 stack<int>d;
 d.push(8);
 d.push(11);
 d.push(3);
 d.push(2);
 d.push(9);
 Bottom(d,5);
print(d);
 return 0;
}