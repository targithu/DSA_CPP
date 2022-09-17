#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
void revQ(queue<int> &que){
stack<int> m;
while(!que.empty()){
m.push(que.front());
que.pop();
}
while (!m.empty()) {
        que.push(m.top());
        m.pop();
    }
}

int main()
{    
    queue<int>q;
    q.push(12);
    q.push(2);
    q.push(9);
    q.push(8);
    q.push(5);
    revQ(q);
    Print(q);
    return 0;
}