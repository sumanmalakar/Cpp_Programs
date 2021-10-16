#include <iostream>
using namespace std;
class B;
class A
{
private:
  int a;
public:
  void setData(int x){ a = x;}
  friend void fun(A, B); // declare friend function
};

class B
{
private:
  int b;
public:
   void setData(int y){b = y;}
  friend void fun(A, B); // declare friend function
};

void fun(A o1, B o2) // defining the friend function
{ 
  cout << "sum is " << o1.a + o2.b;
}

int main()
{
  A obj1;
  obj1.setData(3);
  B obj2;
  obj2.setData(5);
  fun(obj1, obj2);

  return 0;
}