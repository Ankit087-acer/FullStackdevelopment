#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
    if(i%2==0){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
    }
    else{
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    }
    cout<<"\n";
   }
    return 0;
}