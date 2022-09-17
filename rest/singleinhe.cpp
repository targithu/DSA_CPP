#include <iostream>
using namespace std;

class AnimaL{
    public:
    int weight;
    int age;
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
    
};
    //the below is an inherited class
class Dog:public AnimaL{
    public:
    string color;
    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};
class GermanShepherd:public Dog{
    
}

int main(){
   GermanShepherd g;
   g.speak();
    return 0;
}


