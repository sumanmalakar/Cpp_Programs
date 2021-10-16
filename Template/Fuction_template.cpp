#include<iostream>
using namespace std;

template <class X>
X big(X a, X b){
   if(a>b){
     return a;
   }
   else{
     return b;
   }
  
}   

int main(){
  cout<<big(3,4)<<endl;
  cout << big(3.34, 4.56) << endl;

  return 0;
}