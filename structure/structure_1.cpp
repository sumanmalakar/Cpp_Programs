#include<iostream> 
#include<conio.h>
#include<string.h>
using namespace std; 

struct book{
  int bookid;
  char title[100];
  float price;
};


int main(){
 
 book b1 = {100, "c++ by suman" , 440 };
 book b2,b3;
 b2.bookid = 101;
 strcpy(b2.title,"c++ made easy");
 b2.price = 300;

 b3 = b2;
  

return 0;
}