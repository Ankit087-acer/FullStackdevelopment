#include <iostream>
using namespace std;
class fraction{
public:
   int num;
   int den;
   fraction(int num,int den){
    this->num=num;
    this->den=den;
   }
   void display(){
    cout<<num<<" / "<<den<<endl;
   }
    fraction add(fraction f){
          int newnum=this->num*f.den+f.num*this->den;
          int newden=this->den*f.den;
        fraction ans(newnum,newden);
        return ans;
   }
   fraction subtract(fraction f){
          int newnum=this->num*f.den-f.num*this->den;
          int newden=this->den*f.den;
        fraction ans(newnum,newden);
        return ans;
   }
   fraction multiply(fraction f){
          int newnum=this->num*f.num;
          int newden=this->den*f.den;
        fraction ans(newnum,newden);
        return ans;
   }
   fraction divide(fraction f){
          int newnum=this->num*f.den;
          int newden=this->den*f.num;
        fraction ans(newnum,newden);
        return ans;
   }

};
int main() {
   fraction f1(1,2);
   fraction f2(3,4);
   f1.display();
   f2.display();
   fraction f3=f1.add(f2);
   f3.display();
   fraction f4=f1.subtract(f2);
   f4.display();
   fraction f5=f1.multiply(f2);
   f5.display();
   fraction f6=f1.divide(f2);
   f6.display();
   return 0;
}