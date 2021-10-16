 #include<iostream>
 using namespace std;
 class A{
   int a;
   public:
   A(int k){ // Constructor
     a = k;
   }
  ~A(){} // Destructor
 };

 class B: public A{
   int b;
   public:
   B(int x, int y):A(x){
     b = y;
   }
   ~B() {} // Destructor
 };

 void main(){
   B obj(2,3);
 }