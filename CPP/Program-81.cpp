#include <iostream>
#include <cmath>
using namespace std;
int factorial(int x){
  int f=1;
  for(int i=1;i<=x;i++){
    f*=i;
  }
  return f;
}
int combination(int n,int r){
int a=factorial(n);
int b=factorial(r);
int c=factorial(n-r);
return a/(b*c);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){\
        for(int j=0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<"  ";
        }
        cout<<"\n";
    }
    
    return 0;
}