#include<iostream>
#include<array>
using namespace std;

int main(){

array <int, 5>data_array;
array<int, 5> student_marks = {45,63,87,30,89};

cout<<student_marks[3]<<endl;

// at()
cout<<student_marks.at(1)<<endl;  

// front()
cout<<student_marks.front()<<endl;

// back()
cout << student_marks.back() << endl;

data_array.fill(20);
for(int i = 0; i<=4; i++){
  cout<<data_array[i]<<" ";
}
cout<<endl;

array <int, 5>data_arra_1 = { 12,34,56,77,66};
array<int, 5>data_arra_2 = { 1,2,4,5,6};

// swap()
data_arra_1.swap(data_arra_2);
for(int i = 0; i<5; i++){
  cout<<data_arra_1[i]<<" ";
}
cout<<endl;
for (int i = 0; i < 5; i++)
{
  cout << data_arra_2[i]<<" ";
}
cout<<endl;

array<int , 5>data_arra_s = { 11,23,45,6};

// size()
cout<<data_arra_s.size();


return 0;
}
