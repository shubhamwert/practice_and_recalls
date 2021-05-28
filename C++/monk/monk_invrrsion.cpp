#include<iostream>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t>0)
    {int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    // for(int i=0;i<n;i++){cout<<a[i]<<" ";}

    for(int i=0;i<n;i++){
            b[i]=a[(i+k+1)%n];
                            }    
    cout<<endl;
    for(int i=0;i<n;i++){cout<<b[i]<<" ";}
    t--;
    }
    return 0;

}