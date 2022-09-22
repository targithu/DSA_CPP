#include<iostream>
#include<vector>

using namespace std;
int main(){
 vector<int> v;
 vector<int> a(5,1);//(5,1)this means 5 is size 
 //and all elements initialised to 1
 vector<int> last(a);//means a is copied into last vector
 cout<<"Capacity->"<<v.capacity()<<endl;
 v.push_back(1);
 cout<<"Capacity->"<<v.capacity()<<endl;
 v.push_back(2);
 cout<<"Capacity->"<<v.capacity()<<endl;
 v.push_back(3);
 cout<<"Capacity->"<<v.capacity()<<endl;
 cout<<"Size->"<<v.size()<<endl;
 cout<<"front->"<<v.front()<<endl;
 cout<<"back->"<<v.back()<<endl;
 cout<<"before pop"<<endl;
 for(int i:v){
     cout<<i<<" ";
 }cout<<endl;
 v.pop_back();
 cout<<"after pop"<<endl;
 for(int i:v){
     cout<<i<<" ";
 }
 cout<<"before clearsize : "<<v.size()<<endl;
 v.clear();
 cout<<"after clearsize : "<<v.size()<<endl;
}