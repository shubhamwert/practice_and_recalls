#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        
        int a[2*n];
        for(int i=0;i<2*n;i++){cin>>a[i];}
        int p[n];
        int k=1;
        p[0]=a[0];
        for(int i=0;i<2*n;i++){

            bool b=true;
            for(int j=0;j<k;j++){
                if(a[i]==p[j]){
                    b=false;
                    break;
                }
                
                
            }
            if(b){
                p[k]=a[i];
                k++;
            }    
            


        }


        
        
        for(int i=0;i<n;i++){cout<<p[i]<<" ";}
        cout<<endl;
        
        
        t--;
    }




}