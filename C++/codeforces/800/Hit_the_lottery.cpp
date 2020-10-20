#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int p[]={100,20,10,5,1};
    for(int i=0;i<5;i++){
        if(n==0){
            cout<<count;
            return 0;}
        
        count=count+n/p[i];
        n=n%p[i];
    }
    cout<<count;



    return 0;
}