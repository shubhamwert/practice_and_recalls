#include<iostream>
#include<cmath>
using namespace std;

int main(){

int a;
cin>>a;
for(int i=1;i<a;i++){
   bool p=false;
   if(i%2==0 && i!=2){
       continue;
   }
    for(int j=2;j<=sqrt(i);j++){

        if(i%j==0){
            p=true;
            break;
        }
        else{
            continue;
        }

    }
    if (p==false)
    {
        cout<<i<<endl;
    }
    else{
        continue;
    }
    


}



}