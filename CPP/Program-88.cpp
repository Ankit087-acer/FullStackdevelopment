#include <iostream>
using namespace std;
int power(int n, int m) {
    if (m == 0) return 1;
    int half = power(n, m / 2);
    if (m % 2 == 0)
        return half * half;
    else
        return n * half * half;
}

int main() {
   int n,m;
   cin>>n>>m;
   cout<<power(n,m);
    return 0;
}
