#include <iostream>
using namespace std;
class Crickter {
public:
   string name;
   int runs;
   float avg;
   Crickter(string name,int runs,float avg){
    this->name=name;
    this->runs=runs;
    this->avg=avg;
   } 
};
void change(Crickter* C){
    C->avg=68.9;
}

int main() {
   Crickter c1("Virat Kohli",25000,54.2);
   Crickter c2("Rohit Sharma",18000,45.8);
   Crickter* p1=&c1;
   cout<<(*p1).runs<<endl;
   (*p1).name="Sir Don Bradman";
   cout<<c1.name<<endl;
   change(&c1);
    cout<<c1.avg<<endl;
   return 0;
}