#include <iostream>
using namespace std;

void fun(){
  throw 10;
}

int main()
{
  int i = 2;
  cout << "Welocme";
  try
  {
    if (i == 2)
      fun();
    cout << "\n In Try Block";
  }
  catch (int)
  {
    cout << "\n Exception no: " ;
  }
  cout << "\n Last Line";

  return 0;
}