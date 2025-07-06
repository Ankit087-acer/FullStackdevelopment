#include <iostream>
#include <cmath>
using namespace std;
int factorial1(int n){
  int fact1=1;
  for(int i=1;i<=n;i++){
    fact1*=i;
  }
  return fact1;
}
int factorial2(int r){
  int fact2=1;
  for(int i=1;i<=r;i++){
    fact2*=i;
  }
  return fact2;
}
int factorial3(int n,int r){
  int fact3=1;
  for(int i=1;i<=(n-r);i++){
    fact3*=i;
  }
  return fact3;
}
int main(){
    int n,r;
    cin>>n>>r;
    if(n<r){
        cout<<"Error";
    }
    int a=factorial1(n);
    int b=factorial2(r);
    int c=factorial3(n,r);
    int combination=a/(b*c);
    cout<<combination;
    return 0;
} 