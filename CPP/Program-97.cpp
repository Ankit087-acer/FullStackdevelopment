#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[100],n,r_arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int j=n-i-1;
        r_arr[i]=arr[j];
        cout<<r_arr[i]<<" ";
    }
    return 0;
} 