#include<iostream>
#include<map>
#include<utility>
#include<unordered_map>
using namespace std;
int main()
{  
//creation
unordered_map<string,int> m;
//insertion 1st method
pair<string,int> p=make_pair("bass",3);
m.insert(p);
//2nd method
pair<string,int> p2("bar",3);
m.insert(p2);
//3rd
m["hey"]=4;
m["hey"]=7;//every key has a unique entry
//Search
cout<<m["hey"]<<endl;//7
cout<<m.at("unknown")<<endl;//error
cout<<m["unknown"]<<endl;//0
cout<<m.at("unknown")<<endl;//0
cout<<m.at("hey")<<endl;//7
//size
cout<<m.size()<<endl;
//to check presence
cout<<m.count("bro")<<endl;//if absent-0,if present-shows count
//erase
m.erase("hey");
cout<<m.size()<<endl;
//to access elements
//1st
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
//2nd
unordered_map<string,int>:: iterator it=m.begin();
while (it!=m.end())
{
    cout<<it->first<<" "<<it->second<<endl;
}


return 0;
}