#include <iostream>
using namespace std;

class Hero{
 private:
 int health;
 public:
 char level;
 int gethealth(){
     return health;
 }
 char getlevel(){
     return level;
 }
 void sethealth(int h){
     health=h;
 }
 void setlevel(char ch){
     level=ch;
 }
};
int main(){
  //creation of object
  Hero suresh;
  //using setter-to set private instances
  suresh.sethealth(70);
  suresh.level='A';
  cout<<"health is "<<suresh.gethealth()<<endl;//to getprivate instances
   cout<<"level is "<<suresh.level<<endl;

 Hero *b=new Hero;
   cout<<"health is "<<(*b).gethealth()<<endl;//to getprivate instances
   cout<<"level is "<<(*b).level<<endl;

}