#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    //one way to insert
    pair<string,int> p=make_pair("school",3);
    m.insert(p);
    //second way to insert
pair<string,int> pair2("school",2);
m.insert(pair2);
return 0;
}