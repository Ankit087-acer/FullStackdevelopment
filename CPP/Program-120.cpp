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
    int min=arr1[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         if(arr1[i][j]<min){
            min=arr1[i][j];
         }
        }
    }
    cout<<min;
   
    return 0;
}