#include <iostream>
using namespace std;
class Scooty{
public:
  int topspeed;
  float mileage;
private:
   int bootspace;
};
class bike:public Scooty{
public:
int gears;
};
int main() {
   bike b1;
   b1.topspeed=100;
   b1.mileage=12.5;
   b1.gears=6;
   cout<<b1.topspeed<<" "<<b1.mileage<<" "<<b1.gears;
   return 0;
}