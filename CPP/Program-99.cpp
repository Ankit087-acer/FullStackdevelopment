#include <iostream>
using namespace std;
int sqr_arr(int arr[100],int n){
    int s_arr[100];
    for(int i=0;i<n;i++){
        s_arr[i]=arr[i]*arr[i];
        cout<<s_arr[i]<<" ";
    }
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sqr_arr(arr,n);
    return 0;
} 