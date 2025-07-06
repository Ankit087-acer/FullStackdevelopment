#include <iostream>
using namespace std;
int print_arr(int arr[100],int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print_arr(arr,n);
    return 0;
} 