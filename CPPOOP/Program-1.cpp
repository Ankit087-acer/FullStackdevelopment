#include <iostream>
using namespace std;
class Student{
public:
 string name;
 int rno;
 float gpa;
};
int main(){
    Student s;
    cin>>s.name>>s.rno>>s.gpa;
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa;
    return 0;
}