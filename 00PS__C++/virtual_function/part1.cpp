#include<iostream>
using namespace std;
// function overriding me jo problem hoti hai, usko resolve karne  me virtual function kam aata hai.

class A{
  public:
  virtual void f1(){ }
};
class B: public A{
  public:
  void f1() {} // function overriding
  void f2() { }
};

int main(){
 A *p, o1; 
 B o2;
 p = &o2;
 p->f1(); // B wala chalega!

  return 0;
}