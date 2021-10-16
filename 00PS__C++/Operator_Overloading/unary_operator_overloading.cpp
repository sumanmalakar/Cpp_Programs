#include <iostream>
using namespace std;
class Complex
{
private:
  int a, b;

public:
  void set_data(int x, int y)
  {
    a = x;
    b = y;
  }
  void show_data()
  {
    cout << a << " " << b << " ";
  }
  Complex operator-()
  {
    Complex temp;
    temp.a = -a;
    temp.b = -b;
    return (temp);
  }
};

int main()
{
  Complex c1, c2, c3; // c1 is an object
  c1.set_data(3, 4);
  // c2 = c1.operator-(); 
  c2 = -c1; // also we can write 
  c2.show_data();

  


  return 0;
}