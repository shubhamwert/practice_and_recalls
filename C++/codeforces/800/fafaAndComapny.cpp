#include<iostream>


using namespace std;


int main(){
int c=0;
int n;
cin>>n;
for(int i=1;i<=n/2;i++){
    if((n-i)%i==0){
        c++;
    }



}


cout<<c;


}