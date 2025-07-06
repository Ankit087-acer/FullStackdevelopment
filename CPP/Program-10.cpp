#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a>b)&&(a>c)){
        cout<<"Greatest number is "<<a;
    }
    else if((b>c)&&(b>a)){
        cout<<"Greatest number is "<<b;
    }
    else if((c>b)&&(c>a)){
        cout<<"Greatest number is "<<c;
    }
    else{
        cout<<"All numbers are equal";
    }
    return 0;
}