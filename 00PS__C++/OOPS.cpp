#include<iostream>
using namespace std;


class Laptop{
  public:
  string brand;
  float screen;
  float prize;
  string processor_core;

  void show(){
    cout <<brand << endl;
    cout <<screen << endl;
    cout <<prize << endl;
    cout <<processor_core << endl;
  }
  Laptop(string brand_name, float screeen_sieze, float price, string processor){
        brand = brand_name;
        screen = screeen_sieze ;
        prize = price;
        processor_core = processor;
  }


};

int main(){

  Laptop l1 = Laptop("hp",14.5, 25000, "intel");
  l1.show();
  cout<<endl;

  Laptop l2 = Laptop("Dell", 16.5, 30000, "intel i5");
  l2.show();

  return 0;
}