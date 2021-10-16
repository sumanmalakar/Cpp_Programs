#include<iostream>
#include<fstream>
using namespace std;

int main(){
 ifstream fin;
 char ch;
 fin.open("myfile.dat");
 ch = fin.get();
 while(!fin.eof()){
   cout<<ch;
   ch = fin.get();
 }
 fin.close();

  return 0;
}