#include <iostream>
using namespace std;

string letterCombi(string digits){
    string ans;
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno"
    ,"pqrs","tuv","wxyz"};
    solve(digits,output,index,ans,mapping);
    return ans;
}