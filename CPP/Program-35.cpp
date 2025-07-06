#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int n,count=0;
   cin>>n;
   int temp=n;
   while(temp>0){
    temp/=10;
     count++;
   }
   cout<<count;
    return 0;
}