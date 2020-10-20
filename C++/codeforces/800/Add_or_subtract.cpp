#include<iostream>


using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            t--;
            continue;
        }
        int d=b-a;
        if(d>0){
            if(d%2==0){
                cout<<"2"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }}
        else{
            if(d%2==0){
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
            
        }
        




        t--;
    }



    return 0;
}