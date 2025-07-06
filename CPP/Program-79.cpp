#include <iostream>
using namespace std;
int swap(int& a,int& b){
   a+=b;
   b=a-b;
   a-=b;
   cout<<a<<" "<<b;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    return 0;
}