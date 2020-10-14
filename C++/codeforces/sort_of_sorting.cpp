#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
         cout<<"[processing]   ====>>> "<<t<<"  for n ====>>> "<<n<<endl;
        int counter=n;
        int a[n];
        for(int i=0;i<n;i++){cin>>a[i];
       }
        sort(a,a+n);
        for(int i=n-1;i>0;i--){
            if(a[i]-a[i-1]>1){
                cout<<"NO"<<endl;
                break;
            }
            else{
                counter--;
            }
        }
        if(counter==1){
            cout<<"YES"<<endl;
        }        
        t--;
    }


    return 0;
}