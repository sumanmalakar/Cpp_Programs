#include<iostream>
using namespace std;
class A{
  public:
  int x;
  protected:
  int y;
  private:
  int z;
};

class B : public A{
  // public:
  // void set_data(int k){
  //   y = k;
  // }
};

int main(){
B b;
// b.set_data(5);
cout<<b.x<<endl;
cout<<b.y<<endl;
cout<<b.z<<endl;

  return 0;
}