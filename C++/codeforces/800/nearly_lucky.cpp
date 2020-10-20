#include<iostream>

using namespace std;



// int lucky(int n){




// }
int main(){
    long int n;
    int count=0;
    cin>>n;
    while(n>0){
        if(n%10==4 || n%10==7){
            count++;
        }
        n=n/10;




    }
    // cout<<count<<endl;
    while(count>0){
        if(count%10!=4 && count%10!=7){
            cout<<"NO";
            return 0;
        }

        count=count/10;

    }
    cout<<"YES";

    return 0;
}