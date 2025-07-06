#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int n,b;
   int even_sum=0;
   cin>>n;
   while(n>0){
      b=n%10;
      n/=10;
      if(b%2==0){
        even_sum+=b;
      }
   }
   cout<<even_sum;
    return 0;
}