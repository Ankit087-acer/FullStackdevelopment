#include <iostream>
#include <climits>
using namespace std;
int main(){
   string s;
   getline(cin,s);
   s.push_back('a');
   cout<<s;
   s.pop_back();
   s.clear();
   cout<<s;
    return 0;
}