#include <iostream>
using namespace std;
int change_arr(int arr[100],int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    change_arr(arr,n);
    return 0;
} 