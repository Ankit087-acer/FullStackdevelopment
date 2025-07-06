#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>=0 && b>=0){
        cout<<"First Quadrant";
    }
    else if(a>=0 && b<=0){
        cout<<"Second Quadrant";
    }
    else if(a<=0 && b<=0){
        cout<<"Third Quadrant";
    }
    else{
        cout<<"Fourth Quadrant";
    }
    return 0;
}