#include<iostream> 
using namespace std; 

class Account{
private:
  int balance; // Instance Member variable
  static float roi; // Static Member variable/ Class variable

public:
  void setBalance(int b)   { // Instance Memeber function
    balance = b; 
  }
  static void setRoi(float r){ // Static Member Function
    roi = r;
  }
};

float Account :: roi=3.3; // Compulsory to define


 int main(){

Account a1, a2;
a1.setRoi(34.4f);
Account::setRoi(34.3f);
  

return 0;
}