#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr1[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>arr1[i][j];
        }
    }
    int product=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        product*=arr1[i][j];
        }
    }
    cout<<product;
   
    return 0;
}