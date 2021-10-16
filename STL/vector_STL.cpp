#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int>v1 {10,20,30,40,50};
cout<<v1.capacity()<<endl;

//zero length vector
vector<int> s;

vector<char>v2(4);
vector <int> v3(5,10);
vector<string> v4(3,"hello - suman");
cout<<v4[0]<<endl;

for(int i= 0; i<5; i++){
  cout<<v1[i]<<endl;
}

vector<int> s1;
cout<<"current capacity is "<<s1.capacity()<<endl;
s1.push_back(10);
cout << "current capacity is " << s1.capacity() << endl;
s1.push_back(30);
cout << "current capacity is " << s1.capacity() << endl;
s1.push_back(40);
cout << "current capacity is " << s1.capacity() << endl;
cout<<endl;

vector <int> g1;
cout<<"current capacity is "<<g1.capacity()<<endl;
for(int i = 0; i<=9; i++){
  g1.push_back(10*(i+1));
}
  cout << "current capacity is " << g1.capacity() << endl;

g1.pop_back();
cout<<"after pop \n";
cout << "current capacity is " << g1.capacity() << endl;
g1.pop_back();
cout<<"current capacity is "<< g1.capacity()<<endl;
g1.pop_back();
cout << "current capacity is " << g1.capacity() << endl;

cout << "Total number of elements are " << g1.size() << endl;

cout<<endl;
vector<int> f1;
cout << "current capacity is " << f1.capacity() << endl;
for (int i = 0; i <= 9; i++)
{
  f1.push_back(10 * (i + 1));
}

for(int i=0; i<f1.size(); i++){
  cout<<endl<<f1[i];
}

// clear() --> it clear all element of vector
f1.clear();
cout << "\ncurrent capacity is " << v1.capacity() << endl;
cout<<f1.size();

vector<int> s2;
for (int i = 0; i <= 9; i++)
{
  s2.push_back(10 * (i + 1));
}
cout<<endl;

for (int i = 0; i<s2.size(); i++)
{
  cout<<s2[i]<<endl; 
}
cout<<"\nvalue at index "<< s2.at(3);

cout<<"\nFirst value is "<<s2.front();
cout << "\nLast value is " << s2.back();

// iterator

for(int i =0; i<v1.size(); i++)
cout<<endl<<v1[i];

cout<<"\n \n";

// iterator
vector <int>:: iterator it = v1.begin();
v1.insert(it+3, 35);
for(int i =0; i<v1.size(); i++)
cout<<endl<<v1[i];

return 0;
}


