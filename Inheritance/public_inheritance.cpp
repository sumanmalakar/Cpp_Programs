#include<iostream>
using namespace std;

class Car{
  private:
  int gear;
  public:
  void increment_gear(){
    if(gear<5){
      gear++;
    }
  }
};

class Sports_Car:public Car{

};

int main(){


  return 0;
}