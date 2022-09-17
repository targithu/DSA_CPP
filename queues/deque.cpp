#include<iostream>
#include<queue>
using namespace std;


int main(){
  deque<int> d;
  d.push_front(12);
  d.push_back(14);
   d.push_back(16);
  cout<<d.back();
  return 0;
}