#include <iostream>
using namespace std;
class encap{
    int age;
    void show(){
        cout<<"Ram"<<endl;
    }
    public:
    string name;
    void setvalue(int a){
        show();
        age=a;
        cout<<age<<endl;
    }

};
int main(){
  encap E;
  E.setvalue(19);
  E.name="Ankit";
  cout<<E.name;
   return 0;
}