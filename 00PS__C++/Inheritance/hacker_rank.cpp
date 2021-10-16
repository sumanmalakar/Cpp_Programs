#include <iostream>
using namespace std;
class Rectangle
{
public:
  int width, height;
  void display()
  {
    cout << width << " " << height;
  }
};
class RectangleArea : public Rectangle
{
public:
  void read_input()
  {
    cin >> width >> height;
  }
  void display()
  {
    cout << endl << (width * height);
  }
};

int main()
{
  RectangleArea r;
  r.read_input();
  r.Rectangle::display();
  r.display();

  return 0;
}