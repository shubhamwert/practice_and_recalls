#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a[n];
        bool b=false;
        for(int i=0;i<n;i++){cin>>a[i];}
        for(int i=0;i<n-1;i++)    
           { 
            for(int j=i+1;j<n;j++){
                    // {   cout<<a[i]<<"   "<<a[j]<<endl;
                        if(a[i]<=a[j]){
                            b=true;
                            cout<<"YES"<<endl;
                            break;
                        }
                    }        
            if(b){
                break;
            }      
            
             }
        if(!b){
            cout<<"NO"<<endl;
        }
        t--;
    }
    
    
    return 0;
}