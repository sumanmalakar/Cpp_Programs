#include<iostream>
using namespace std;
// method = function
class A{
  public:
    void f1(){ }
    void f2(){ }
};
class B: public A{
  public:
  void f1() { } // Method overriding
  void f2(int x){ } // Method Hiding
};

int main(){
B obj;
obj.f1(); // Class B wala chalega
obj.f2(); // error aayega
obj.f2(4); // Class B wala chalega

return 0;
}