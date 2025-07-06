#include <iostream>
using namespace std;
int diff_arr(int arr[100],int n){
    int sum_e=0,sum_o=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum_e+=arr[i];
        }
        else{
            sum_o+=arr[i];
        }
    }
    int diff=sum_e-sum_o;
    cout<<diff;
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    diff_arr(arr,n);
    return 0;
} 