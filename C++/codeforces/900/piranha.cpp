#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int temp=a[0];
        for( int i=1;i<n;i++){
            if(a[i]!=temp){
                cout<<i+1<<endl;
                break;
            }
            else{
                temp=a[i];
            }
            
        }
        if(temp==a[n]){
            cout<<-1<<endl;
        }


        t--;
    }





}