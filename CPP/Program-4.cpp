#include <iostream>
using namespace std;
int main(){
    int sp,cp;
    cin>>sp>>cp;
    int profit,loss;
    if(cp>sp){
        loss=cp-sp;
        cout<<"The seller makes the loss of "<<loss;
    }
    else if(sp>cp){
        profit=sp-cp;
        cout<<"The seller makes the profit of"<<profit;
    }
    else{
        cout<<"The seller does not makes a profit or loss";
    }
    return 0;
}