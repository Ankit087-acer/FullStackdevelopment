#include <iostream>
using namespace std;
int prod_arr(int arr[100],int n){
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    cout<<product;
}
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prod_arr(arr,n);
    return 0;
} 