#include <iostream>
using namespace std;
// Overloading of operator as a friend function
class Complex
{
private:
  int a, b, sum, subtraction;

public:
  void setData(int x, int y)
  {
    a = x;
    b = y;
  }
  void show_data(){
    cout<<"a = "<<a<<" b = "<<b;
  }
  void show_sum()
  {
    cout << "The sum of a and b is = "<<sum;
  }
  void show_subtraction()
  {
    cout << "The subtraction of a and b is = " <<subtraction;
  }
  friend Complex operator+(Complex);  // operator overloading for +
  friend Complex operator-(Complex);  // operator overloading for -
};

Complex operator+(Complex X)
{
  Complex temp;
  temp.sum = X.a + X.b;
  return (temp);
};
Complex operator-(Complex y)
{
  Complex suman;
  suman.subtraction = y.a - y.b;
  return(suman);
}

int main()
{
  Complex c1, c2, c3;
  c1.setData(5, 4);
  // c2 = operator+(c1); 
  c2 = +c1;
  c2.show_sum();
  cout<<endl;
  c2 = operator-(c1); // c2 = -c1;
  c2.show_subtraction();
 
  return 0;
}