#include<iostream>
using namespace std;
class ArrayList{
  private:
  struct ControlBlock{
    int capacity;
    int *arr_ptr;

  };
  ControlBlock *s;
  public:
  ArrayList(int capacity){
     s = new ControlBlock;
     s->capacity = capacity;
     s->arr_ptr = new int[s->capacity];
  }
  void addElement(int index, int data){
    if(index >=0 && index <= capacity-1){
         s->arr_ptr[index];}
        else{
          cout<<"\n"
        }
  }
};
//you can watch lecture again for better understanding