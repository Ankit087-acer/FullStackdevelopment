#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
    if(i==3 || i==8){
        continue;
    }
     cout<<i<<" ";}
   
    return 0;
}