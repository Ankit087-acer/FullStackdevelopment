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
   void print(){
    cout<<name<<" "<<runs<<" "<<avg;
   }
   int matches(){
    return runs/avg;
   }
};

int main() {
   Crickter c1("Virat Kohli",25000,54.2);
   Crickter c2("Rohit Sharma",18000,45.8);
   c1.runs=27000;
   c1.print();
   cout<<"\n";
   cout<<c1.matches();
   cout<<"\n";
   c2.print();
   cout<<"\n";
   cout<<c2.matches();
   return 0;
}