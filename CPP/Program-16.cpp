#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int a,b;
    char ch;
    cin>>a>>b>>ch;
    switch(a,b, ch){
        case '+':cout<<a+b;
        break;
        case '-':cout<<abs(a-b);
        break;
        case '*':cout<<a*b;
        break;
        case '/':if(b==0){
            cout<<"Error";
        }
        else{
            cout<<a/b;
        }
        break;
        default:cout<<"Error";
    }
    return 0;
}