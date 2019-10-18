// You are given an array of n numbers and q queries. For each query you have to print the floor of the expected value(mean) of the subarray from L to R.


// First line contains two integers N and Q denoting number of array elements and number of queries.

// Next line contains N space seperated integers denoting array elements.

// Next Q lines contain two integers L and R(indices of the array).


// print a single integer denoting the answer.
#include<bits/stdc++.h>
#include <numeric>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,q,r,l;
    cin>>n>>q;
    
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    
    while(q){r=0;l=0;
        cin>>l>>r;
        int initial_sum  = 0;
        cout<<accumulate(a+l-1,a+r,initial_sum)/(r-l+1)<<"\n";
        q--;
    }



    return 0;
}