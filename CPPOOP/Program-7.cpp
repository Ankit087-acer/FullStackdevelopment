#include <iostream>
using namespace std;
class Crickter {
public:
   string name;
   int runs;
   Crickter(string name,int runs){
    this->name=name;
    this->runs=runs;
   }
};

int main() {
   Crickter c1("Virat Kohli",25000);
   Crickter c2("Rohit Sharma",18000);
   cout<<c1.name<<" "<<c1.runs;
   cout<<"\n";
   cout<<c2.name<<" "<<c2.runs;

   return 0;
}