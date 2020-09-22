// You are given an array of n numbers and q queries. For each query you have to print the floor of the expected value(mean) of the subarray from L to R.


// First line contains two integers N and Q denoting number of array elements and number of queries.

// Next line contains N space seperated integers denoting array elements.

// Next Q lines contain two integers L and R(indices of the array).


// print a single integer denoting the answer.
#include<bits/stdc++.h>
#include <numeric>
#define fast ios::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fast;
    long long int n,q,r,l;
    // cin>>n>>q;
    scanf("%lld %lld",&n,&q);
    long long int sum[n+1];
    long long int a=0;
    sum[0]=0;
     
    for(int i=1;i<=n;i++){
        scanf("%lld",&a);
         
        sum[i]=sum[i-1]+a;
    }
    
      
    while(q>0){r=0;l=0;
    
        scanf("%lld %lld",&l,&r);
         
        printf("%lld\n",(sum[r]-sum[l-1])/(r-l+1));
        q--;
    }



    return 0;
}