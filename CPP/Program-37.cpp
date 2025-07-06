#include <iostream>
using namespace std;
int main(){
   int n,reverse=0,b;
   cin>>n;
   while(n>0){
    b=n%10;
    reverse=reverse*10+b;
    n/=10;
   }
   cout<<reverse;
    return 0;
}

