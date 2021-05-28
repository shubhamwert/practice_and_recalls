#include<iostream>


using namespace std;
int main(){
        int t;
        cin>>t;
        while(t>0){
            int n;
            cin>>n;
            long int a[n];
            for(int i=0;i<n;i++){cin>>a[i];}
            int k=0;
            int p[n];
            for(int i=0;i<n;i++){

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
                
            cout<<k<<endl;
            
            t--;
        }
        
        
        
        
        return 0;
    }