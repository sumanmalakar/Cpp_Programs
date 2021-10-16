#include<iostream>
#include<fstream>
using namespace std;
  /*
The useful calsses for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream  --> derived from fstreambase
*/

// In order to work with files in c++, you will have to open it, Primarily, there are 2 ways to open a file:
//1. Using the constructor
//2. Using the member function open() of the class

int main(){
 ofstream fout;
 fout.open("myfile.py");
 fout<<"hello";
  return 0;
}