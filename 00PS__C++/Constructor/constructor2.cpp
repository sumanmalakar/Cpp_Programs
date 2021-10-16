#include<iostream> 
using namespace std;

class Complex{
  private:
    int a, b;
  public:
    Complex(int x, int y){ // parameterize constructor
      a =x ; b = y;
    }
    Complex(int k){ // parameterize constructor
      a = k;
    }
    Complex(){} // Default constructor
    void display(){
      cout<<a<<" "<<b;
    }
};

 int main(){

  Complex c1(5,4), c2(5), c3;
  // Complex c1 = Complex(5, 4), c2 = Complex(5), c3, c4(3);

  // Complex c1(2,3);

  c1.display(); 
  cout<<endl;
  c2.display();


return 0;
}