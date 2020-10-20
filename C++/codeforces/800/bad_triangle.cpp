#include<iostream>


using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){cin>>a[i];}
        if(a[0]+a[1]<a[n-1]){
            cout<<"1 2 "<<n<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }


        t--;
    }

return 0;

}