#include <iostream>
using namespace std;

struct book
{
  //now book is a data type here, like int ,char, float
  int bookid;
  char title[200];
  float price;
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
  b1.input();
  b1.display();

  return 0;
}
