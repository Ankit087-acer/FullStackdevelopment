#include <iostream>
using namespace std;
int count_arr(int arr[100],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
       if(arr[i]>x){
        count++;
       }
    }
    cout<<count;
}
int main(){
    int arr[100],n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    count_arr(arr,n,x);
    return 0;
} 