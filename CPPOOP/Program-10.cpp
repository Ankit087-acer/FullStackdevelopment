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

int main() {
   Crickter c1("Virat Kohli",25000,54.2);
   Crickter* c2=new Crickter("Rohit Sharma",18000,45.8);
   cout<<c1.name<<" "<<c1.runs<<endl;
   cout<<c2->name<<" "<<c2->runs<<endl;
   return 0;
}