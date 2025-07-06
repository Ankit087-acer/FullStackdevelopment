#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // if(n>=0){
    //     cout<<n;
    // }
    // else{
    //     cout<<-n;
    // }
    // if you want you to change into its absolute value
    if(n<0) n=-n;
    cout<<n;
    return 0;
}