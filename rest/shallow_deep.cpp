#include <iostream>
#include <cstring>
using namespace std;
class Hero{
 private:
    int health;
 public:
    char *name;
    char level;
    Hero(){
        cout<<"Constructor called"<<endl;
        name=new char[100];
    }
    //paramerterised constructor
    Hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health;
    }
    //copy constructor
    Hro(Hero& temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
    }
    void print(){
        cout<<"health: "<<this->health<<" , ";
        cout<<"name: "<<this->name<<endl;
    }
    void setHealth(int h){
        health=h;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
};
int main(){
   Hero hero1;
   hero1.setHealth(12);
   char name[6]="Tarun";
   hero1.setName(name);
   hero1.print();
   hero1.name[0]='K';//here the default constructor uses shallow copy 
   Hero hero2(hero1);
   hero2.print();

return 0;
}