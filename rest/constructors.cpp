#include <iostream>
using namespace std;
class Hero{
 private:
    int health;
 public:
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    //paramerterised constructor
    Hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health;
    }
    void print(){
        cout<<"health"<<health<<endl;
    }
    void setHealth(int h){
        health=h;
    }
};
int main(){
    Hero rahul(70);
    //Copy Constructor
    Hero r(rahul);
    r.print();
    
    // statically
    Hero suresh(10);
    cout<<"Address of suresh "<<&suresh<<endl;
    //dynamically
    Hero *h=new Hero;
return 0;
}