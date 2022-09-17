#include <iostream>
using namespace std;
// void update(int **p2){
//     p2=p2+1;
//     cout<<"p2"<<p2<<endl;
//     *p2=*p2+1;
//        cout<<"*p2"<<*p2<<endl;
//     **p2=**p2+1;
//        cout<<"**p2"<<**p2<<endl;
// }
int main(){
    // int i=5;
    // int*p=&i;
    // int** p2=&p;
    // cout<<"Hello world!"<<endl;
    // cout<<"Printing p "<<p<<endl;
    //  cout<<"Address p "<<&p<<endl;
    //  cout<<"**p2"<<endl;
    // cout<<"after-p "<<p2<<endl;
    //  cout<<"*p2 "<<*p2<<endl;
    //    cout<<"-------------"<<endl;
    //     update(p2);
    // int* p=0;
    // int first=110;
    // p=&first;
    // cout<<*p<<endl;
    // return 0;
    char st[]="ABCD";
    for(int i=0;st[i]!='\0';i++){
        cout<<*(st)+i;
    }
}