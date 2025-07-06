#include <iostream>
using namespace std;
int sum_arr(int arr[100],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum_arr(arr,n);
    return 0;
} 