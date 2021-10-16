#include<iostream> 
using namespace std; 

int sum(int a, int b, int c = 1){
  return a+b+c;
}

 int main(){

  int x = 5, y = 6;
  cout<<sum(x,y);

return 0;
}