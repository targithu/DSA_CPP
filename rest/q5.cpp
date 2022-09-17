 #include <iostream>
 using namespace std;
 int main(){
     int n;
      int count=1;
  cout<<"Enter the value of n: "<<endl;
 cin>>n;
 int row=1;
 while(row<=n){
     int column=1;
      while(column<=row){
          cout<<count<<" ";
          column=column+1;
          count+=1;
      }
      cout<<endl;
      row=row+1;

    }
}