#include <iostream>
using namespace std;
// this pointer
class Box
{
private:
  int l, b, h;

public:
  void set_dimension(int l, int b, int h)
  {
   this-> l = l;
   this-> b = b;
   this-> h = h;
  }
  void show_dimension()
  {
    cout << "l = " << l << " b = " << b << " h = " << h;
  }
};

int main()
{
  Box small_Box;
  small_Box.set_dimension(12,10,4);
  small_Box.show_dimension();



  // Box *p, small_Box; 
  // p = &small_Box;
  // p->set_dimension(12, 10, 3); //small_box.set_dimension(12,3,4);
  // p->show_dimension();         // small_box.show_dimension();

  return 0;
}