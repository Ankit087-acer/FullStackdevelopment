#include <iostream>
using namespace std;
class array{
public:
 int arr[100];
};
int even_printing(int arr[100],int n){
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        cout<<arr[i]<<" ";
    }
  }
}
int main(){
    array a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a.arr[i];
    }
     even_printing(a.arr,n);
    return 0;
}