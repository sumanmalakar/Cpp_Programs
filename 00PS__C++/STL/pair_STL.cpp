#include <iostream>
using namespace std;
class student
{
private:
  string name;
  int age;

public:
  void setStudent(string s, int a)
  {
    name = s;
    age = a;
  }
  void showStudent()
  {
    cout << " Name: " << name;
    cout << "  Age: " << age;
  }
};
int main()
{ 
  // Initialing pair
  pair<string, int> p1;
  pair<string, string> p2;
  pair<string, float> p3;
  pair<int, student> p4;
  
  // Inserting value in pair
  p1 = make_pair("Rahul", 16);
  p2 = make_pair("India", "New Delhi");
  p3 = make_pair("Drilling c++", 345.5f);

  student s1;
  s1.setStudent("Aishwarya", 19);
  p4 = make_pair(1, s1);

// printing pairs
  cout << "\n Pair 1 ";
  cout << "\n"
       << p1.first << " " << p1.second;

  cout << "\n Pair 2 ";
  cout << "\n"
       << p2.first << " " << p2.second;

  cout << "\n Pair 3 ";
  cout << "\n"
       << p3.first << " " << p3.second;

  cout << "\n Pair 4 ";
  cout << "\n"
       << p4.first << " ";
  student s2 = p4.second;
  s2.showStudent();

  return 0;
}