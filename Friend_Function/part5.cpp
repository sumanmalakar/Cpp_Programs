#include<iostream>
using namespace std;
// Overloading of Insertion and Extraction operator
// you should again watch the lecture

class Complex{
  int a,b;
  public:
  void set_Data(int x, int y){
    a = x; b = y;
  }
  void show_data(){
    cout<<a<<" "<<b;
  }
};

int main(){


  return 0;
} 