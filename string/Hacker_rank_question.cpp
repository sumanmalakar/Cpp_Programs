#include <iostream>
using namespace std;

int main()
{
  string s, f;
  cin >> s >> f;
  string con = s + f;
  int size1 = s.size();
  int size2 = f.size();
  cout << size1 << " " << size2 << endl;
  cout << con << endl;
  
  int temp = s[0];
  s[0] = f[0];
  f[0] = temp;
  cout<<s<<" "<<f;

  return 0;
}