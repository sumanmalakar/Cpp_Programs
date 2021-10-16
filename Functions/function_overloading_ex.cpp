#include<iostream> 


using namespace std; 

// function overloading

float area(int r){
  return (3.14*r*r);
}
int area(int l, int b){
  return (l*b);
}
 int main(){

  int r;
  cout<<"Enter the readuis \n";
  cin>>r;
  cout<<"Area of circle is "<<area(r)<<endl;

  int l, b;
  cout<<"Enter the length and breadth \n";
  cin>>l>>b;
  cout<<"Area of rectangle is "<<area(l,b);

return 0;
}