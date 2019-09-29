#include <bits/stdc++.h> 
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long int answer=1;
    long int p=pow(10,9)+7;
    for(int i =0 ;i<n;i++){

        answer=(answer*a[i]) % p;
        if(a[i]==0){
            break;
        }
    }


    cout<<answer;

    return 0;
}