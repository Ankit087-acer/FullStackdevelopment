#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   if(a<b){
    if(a<c){
        cout<<"A"<<" is a youngest.";
    }
    else{
        cout<<"C"<<" is a youngest.";
    }
   }
   else{
    if(b<c){
        cout<<"B"<<" is a youngest.";
    }
    else{
        cout<<"C"<<" is a youngest.";
    }
   }
    return 0;
}