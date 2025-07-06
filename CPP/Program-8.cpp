#include <iostream>
using namespace std;
int main(){
    int area,perimeter,l,b;
    cin>>l>>b;
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"The area is greater than perimeter";
    }
    else{
        cout<<"The area is not greater than perimeter";
    }
    return 0;
}