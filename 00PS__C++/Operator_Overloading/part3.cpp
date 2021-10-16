#include<iostream>
using namespace std;
// overloading of unary operator  ++(Pre and Post)
// By default class ke member private hote hai

class Integer{
  int x;

  public:
  void set_data(int a){
    x = a;
  }
  void show_Data(){
    cout<<"x = "<<x;
  }

  Integer operator++() // preincrement
  {
    Integer i;
    i.x = ++x;
    return(i);
  }
  Integer operator++(int) // postIncrement
  {
    Integer i;
    i.x = x++;
    return(i);
  }

};

int main(){
Integer i1, i2;
i1.set_data(3);
i1.show_Data();
cout<<" ";

i2 = i1++; // i2 = i1.operator++();
i1.show_Data();
cout << " ";
i2.show_Data();


return  0;
}