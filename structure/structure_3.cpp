#include <iostream>
using namespace std;

struct book
{ 
  private:
  int bookid;
  char title[200];
  float price;

  public:
  void input()
  {
    cout << "Enter the bookid, title, price \n";
    cin >> bookid >> title >> price;
    if (bookid < 0)
    {
      bookid = -bookid; 
    }
  }
  void display()
  {
    cout << bookid << " " << title << " " << price;
  }
};

int main()
{
  book b1;
  b1.bookid = -100;
  b1.input();
  b1.display();

  return 0;
}
