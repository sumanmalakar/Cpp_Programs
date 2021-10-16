#include <iostream>
using namespace std;

class Employee
{
public:
  string name;
  string company;
  int age;

  Employee(string Name, string Company, int Age)
  {
    name = Name;
    company = Company;
    age = Age;
  }
  void Introduce_Your_self()
  {
    cout << name << endl;
    cout << company << endl;
    cout << age << endl;
  }

  
};

int main()
{
  Employee emp1 = Employee("suman", "facebook", 21);
  emp1.Introduce_Your_self();
cout<<endl;

  Employee emp2 = Employee("john-doe", "Microsoft", 41);
  emp2.Introduce_Your_self();
  return 0;
}