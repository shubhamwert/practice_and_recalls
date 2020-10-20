#include<iostream>

using namespace std;

int main(){
    int n,k,w;
    cin>>k>>n>>w;
    
    int t=k*(w)*(w+1)/2;
    // cout<<t<<endl;
    int p=t-n;
    if(p>=0)
        cout<<p;
    if(p<=0)
        cout<<0;
    
    
    
    return 0;
}