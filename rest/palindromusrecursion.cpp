#include <iostream>
using namespace std;

bool checkin(string& str,int m,int n){
    int k=-1;
  if(m>n)
       return true;
  if(str[m]!=str[n])
    k=0;
   if(str[m]==str[n])
    k=1;
  m++;
  n--;
 checkin(str,m,n);
 return k;
}
int main(){
    string word="abbccbba";
    bool k=checkin(word,0,word.length()-1);
    if(k){
        cout<<"It is a Palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }
    return 0;
}