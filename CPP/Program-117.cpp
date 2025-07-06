#include <iostream>
#include<string>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
   string s="Ankit";
   s+=" Parida";
   cout<<s;
   reverse(s.begin(), s.end());
   cout<<endl << s;
    return 0;
}