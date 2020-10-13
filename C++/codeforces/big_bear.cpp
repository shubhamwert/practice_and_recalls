#include<iostream>
#include<cmath>
using namespace std;
     
int main(){
    int a,b;
    cin>>a>>b;
    int n=0;
    while(a*pow(3,n)<=b*pow(2,n)){
                n++;
    }
    cout<<n;

    return 0;


}