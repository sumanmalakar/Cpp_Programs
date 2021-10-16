#include<iostream>
using namespace std;
// Overloading of unary operator as a friend function

class Complex{
  private:
  int a, b;
  public:
  void set_data(int x, int y){
    a = x; b = y;
  }
  void show_data(){
    cout<<a<<" "<<b<<" ";
  }
  friend Complex operator-(Complex);
};

Complex operator-(Complex x){
  Complex temp;
  temp.a = -x.a;
  temp.b = -x.b;
  return(temp);
}

int main(){
  Complex c1,c2;
  c1.set_data(3,4);
  c2 = -c1; // c2 = operator-(c1)
  c1.show_data();
  cout<<endl;
  c2.show_data();

  return 0;
}