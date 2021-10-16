#include<iostream>
using namespace std;

int big(int a, int b){
  if(a>b){
    return a;
  }
  else{
    return b;
  }
}
double big(double a, double b) // function overloading
{
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}
int main(){

cout<<big(4,5);
cout<<endl;
cout<<big(5.6,4.3);

  return 0;
}