#include <iostream>
using namespace std;
class Car{
public:
 string name;
 int price;
 int seats;
};
int main(){
    Car c;
    cin>>c.name>>c.price>>c.seats;
    cout<<c.name<<" "<<c.price<<" "<<c.seats;
    return 0;
}