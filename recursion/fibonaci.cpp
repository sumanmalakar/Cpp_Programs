#include<iostream> 

using namespace std; 

int fibo(int n){

// base condition 
  if(n<2){
    return n;
  }
  return fibo(n-1) + fibo(n-2);
}


 int main(){

cout<<fibo(4);  

return 0;
}