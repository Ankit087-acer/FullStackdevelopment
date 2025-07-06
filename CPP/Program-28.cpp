#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int n,a=3;
    cin>>n;
   for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a*=4;
   }
    return 0;
}