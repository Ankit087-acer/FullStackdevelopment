#include <iostream>
using namespace std;
class car{
  bool startengine;
  public:
  car():startengine(false){}
  void start(){
    startengine=true;
    cout<<"Engine started"<<endl;
  }
  void drive(){
    if(startengine){
        cout<<"You are ready to drive ";
    }
    else{
        cout<<"Can't drive the car";
    }
  }
};
int main(){
   car c;
   c.start();
   c.drive();
   return 0;
}