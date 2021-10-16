#include<iostream>
using namespace std;

//  Default Argument

int add(int x = 1, int y = 2){
  return x+y;
}

int main(){
  int a, b;
  cout<<"Enter two numbers \n";
  cin>>a>>b;

  cout<<add();


  
  return 0;
}