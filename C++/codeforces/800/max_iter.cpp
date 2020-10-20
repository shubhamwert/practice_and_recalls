#include<iostream>


using namespace std;

int main(){

        int n;
        cin>>n;
        int c,p;
        cin>>p;
        int count=1;
        int c_max=1;
        for(int i=0;i<n-1;i++){
            cin>>c;
            if(c>p){
                cout<<count;
                count++;
                continue;
            }
            else
            {
                c_max=count?count>c_max:c_max;
                count=1;    
            }
            



        }

        cout<<c_max;

        return 0;}