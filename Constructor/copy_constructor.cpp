#include <iostream>
using namespace std;

class Complex
{
private:
  int a, b;

public:
  Complex(int x, int y)
  { 
    a = x;
    b = y;
  }
  Complex(int k)
  { 
    a = k;
  }
  Complex() {} // Default constructor
 
 Complex(Complex &c){ // copy constructor
   a = c.a;
   b = c.b;
 }

  void display()
  {
    cout << a << " " << b;
  }
};

int main()
{

  Complex c1(5, 4), c2(5), c3, c4(3);

  Complex c4(c1);

  // c1.display();
  // cout<<endl;
  // c2.display();

  return 0;
}