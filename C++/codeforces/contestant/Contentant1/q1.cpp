#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int total;
        cin>>total;
        int coins=total/3;
        if(total%3==1){
            cout<<coins+1<<" "<<coins;
        }
        else if(total%3==2){
            cout<<coins<<" "<<coins+1;
        }
        else{
            cout<<coins<<" "<<coins;
        }
        cout<<endl<<flush;

        t--;
    }
    return 0;


}