#include <iostream>
using namespace std;
class Student{
private:
  string name;
  int age;
  int height;
public:
int getAge(){
    return this->age;
}
}
int main(){
  Student first;
  cout<<"Hello world"<<endl;
  return 0;
}