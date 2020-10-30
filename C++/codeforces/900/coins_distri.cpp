#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    int total=0;
    for(int i=0;i<n;i++){cin>>a[i];
                            total=total+a[i];
    }
    
    
    sort(a,a+n,greater<int>());
  
    int left=0;
    int i=0;
  for(i=0;i<n;i++){
      total=total-a[i];
      left=left+a[i];
      if(left>total)
          break;
      }
    
    cout<<i+1<<endl;
    



}