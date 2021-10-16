#include<iostream>
#include<iostream>
using namespace std;
// class ke member by default private hote hai

class Complex{
  int a,b; // class ke member by default private hote hai
  public:
  ~Complex(){ // Declaring Desctructure
    cout<<"Desctructor";
  }
};

void fun(){
  Complex obj;
}

int main(){

fun();

  return 0;
}