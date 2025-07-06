#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int found=0;
   if(n<=1){
    cout<<"Not a prime number";
   }
   for(int i=2;i*i<=n;i++){
    if(n%i!=0){
         found=1;
         break;
    }
   }
   if(found){
    cout<<"Prime number";
   }
   else{
    cout<<"Not a Prime number";
   }
    return 0;
}