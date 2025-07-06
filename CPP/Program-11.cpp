#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a<b)&&(a<c)){
        cout<<"Smallest number is "<<a;
    }
    else if((b<c)&&(b<a)){
        cout<<"Smallest number is "<<b;
    }
    else if((c<b)&&(c<a)){
        cout<<"Smallest number is "<<c;
    }
    else{
        cout<<"All numbers are equal";
    }
    return 0;
}