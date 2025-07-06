#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if((a%5==0 || a%3==0)&&(a%15!=0)){
        cout<<"Condition fulfilled";
    }
    else{
        cout<<"Condition is not fulfilled";
    }
    return 0;
}