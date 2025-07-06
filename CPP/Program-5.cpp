#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"Three digit number";
    }
    else{
        cout<<"Not a digit number";
    }
    return 0;
}