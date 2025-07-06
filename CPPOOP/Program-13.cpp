#include <iostream>
using namespace std;
class Student{
public:
  int rno;
  string name;
  Student(int r,string n,float m){
   rno=r;
   name=n;
   marks=m;
  }
   void display(){
    cout<<name<<" "<<marks<<" "<<rno<<endl;
  }
  float getmarks(){
    return marks;
  }
  void setmarks(float m){
    marks=m;
  }
private:
  float marks; 

};

int main() {
   Student s1(76,"Ankit",78.9);
   cout<<s1.getmarks()<<endl;
   s1.setmarks(98.5);
   cout<<s1.getmarks()<<endl;
   return 0;
}