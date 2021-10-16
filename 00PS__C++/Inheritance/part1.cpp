#include<iostream>
class A
{
  private:
  int a;
  protected:
  void set_value(int k){
    a = k;
  } 
};

class B: private A{
  public:
  void set_data(int x){
    set_value(x);
  }
};

int main(){
 
 B obj;
 obj.set_data(5);
 obj.set_value(5)

  return 0;
}