#include<iostream>
#include <bits/stdc++.h> 
using namespace std;


int main(){
    int n;
    cin>>n;
    int k;
    string p;
    cin>>p;
    cin>>k;

    for(int i=0;i<n-k;i++)
        {
            int num1=0;
            int num0=0;
            int q=0;

            for(int j=0;j<k;j++){
                if(p[i+k] == "0"){
                    num0++;
                }

                if(p[i+k] == "1"){
                    num1++;
                }
                if(p[i+k] == "?"){
                    q++;
                }

            }

            int num=num0+num1;
            num*=num;
            if(num!=q){
                cout<<"No"<<flush<<endl;
               return 0; 

            }
            

        }

        cout<<"Yes";

   return 0; 
}