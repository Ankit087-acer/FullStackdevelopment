#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[100],n,r_arr[100],original,reverse;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        original=arr[i];
    }
    
    for(int i=0;i<n;i++){
        int j=n-i-1;
        r_arr[i]=arr[j];
        reverse=r_arr[i];
    }
    if(original==reverse){
        cout<<"Palindromic";
    }
    else{
        cout<<"Not Palindromic";
    }
return 0;}