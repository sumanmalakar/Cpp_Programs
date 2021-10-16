#include<iostream>
using namespace std;
class Array{
  private:
  int a[101];
  public:
  void insert(int index, int value){
    a[index] = value;
  }
};
class STACK: private Array{
  int top;
  public:
  void push(int value){
    insert(top, value);
  }
};
int main(){
  STACK s1;;
  s1.push(34);
  s1.insert(2,45);
}