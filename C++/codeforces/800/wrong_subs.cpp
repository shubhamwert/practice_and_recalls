#include<iostream>

using namespace std;

int main(){
// int result=0;
    int n,k;
    cin>>n>>k;

    while(k>0)
    {
        int m=n%10;
        if(m>=k){
            n=n-k;
            k=0;
        }
        else{
            n=n/10;
            k=k-m-1;
            }


    }
    cout<<n;
    return 0;
}