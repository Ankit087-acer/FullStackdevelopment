#include <iostream>
using namespace std;
int min_arr(int arr[100],int n){
    int mn=arr[0];
    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
    }
    cout<<mn;
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min_arr(arr,n);
    return 0;
} 