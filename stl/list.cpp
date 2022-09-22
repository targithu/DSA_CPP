#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    // list<int>:: iterator it;
    // for ( it = lst.begin();it!=lst.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // OR
      for(auto i:lst){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
list<int> l1;//list of 0 length
l1.push_back(5);
l1.push_back(3);
l1.push_back(2);
l1.push_back(9);//adds element to end of list
display(l1);
//l1.pop_back();//removes last element
//l1.pop_front();//removes first element;
//l1.remove(2);//removes all occurences of 2 in list
//display(l1);
//Sorting list
l1.sort();
display(l1);
list<int> l2(3);//empty list of size 3 with values 0 0 0
list<int>:: iterator it;
it=l2.begin();
*it=45;
it++;
*it=4;
it++;
*it=9;
it++;
display(l2);
//Reversing the list 
l1.reverse();
//Swap list
l1.swap(l2);
//merge list2 into 1
l1.merge(l2);
cout<<"List 1 after merging: ";
display(l1);
    return 0;
}
