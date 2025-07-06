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
    int c=factorial3(n,r);
    int permutation=a/c;
    cout<<permutation;
    return 0;
}