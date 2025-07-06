#include <iostream>
using namespace std;
class Car{
public:
 string name[100];
 int price[100];
 int seats[100];
};
int main(){
    Car c;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c.name[i]>>c.price[100]>>c.seats[100];
    }
    for(int i=0;i<n;i++){
        cout<<c.name[i]<<" "<<c.price[100]<<" "<<c.seats[100];
        cout<<"\n";
    }
    return 0;
}