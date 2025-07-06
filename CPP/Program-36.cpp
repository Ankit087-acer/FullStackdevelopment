#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int n,sum=0,b;
   cin>>n;
   int temp=n;
   while(temp>0){
    b=temp%10;
    sum+=b;
    temp/=10;
   }
   cout<<sum;
    return 0;
}