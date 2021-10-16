#include <iostream>
using namespace std;
// By default class ke member private mane jate hai!!!!
class Complex
{
  int a, b;

public:
  void set_data(int x, int y)
  {
    a = x;
    b = y;
  }
  void show_data()
  {
    cout << a << " " << b;
  }
  friend void fun(Complex); // declaring friend function
};

//Defintion freind function
void fun(Complex c)
{
  cout << "sum is " << c.a + c.b;
}

int main()
{

  Complex c1, c2, c3;
  c1.set_data(2, 3);
  fun(c1);

  return 0;
}