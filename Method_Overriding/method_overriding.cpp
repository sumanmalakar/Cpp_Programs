#include<iostream>
using namespace std;

class Car{
  public:
  void shiftGear(){}
  void f2() {}
};

class SportsCar: public Car{
  public:
  void shiftGear(){ } // Method overriding
  void f2(int x) { } // Mthod Hiding
};

void main(){
  SportsCar obj;
  obj.shiftGear(); // sportsCar
}