#include <iostream>
using namespace std;
int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[0]=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}