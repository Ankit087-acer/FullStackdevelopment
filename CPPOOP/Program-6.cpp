#include <iostream>
using namespace std;
class Student {
public:
   string name;
   int rno;
   float cgpa;
   Student(string s, int r, float c) {
      name = s;
      rno = r;
      cgpa = c;
   }
   Student(string s, int r) {
      name = s;
      rno = r;
     
   }
   Student() {
      name = "";
      rno = 0;
   }
};

int main() {
   Student s1("Ankit", 1139); 
   s1.cgpa = 6.87;
   Student s2("Alice", 1140, 8.5); 
  cout<<s1.name<<" "<<s1.rno<<" "<<s1.cgpa;
  cout<<"\n";
  cout<<s2.name<<" "<<s2.rno<<" "<<s2.cgpa;
   return 0;
}