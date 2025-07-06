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
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        sum+=arr1[i][j];
        }
    }
    cout<<sum;
   
    return 0;
}