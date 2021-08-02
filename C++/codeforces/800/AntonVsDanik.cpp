#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int score=0;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='A'){
            score++;
        }
        else{
            score--;
        }


    }
    if(score==0){
        cout<<"Friendship";
    }
    else{
        if(score>0){
            cout<<"Anton";
        }
        else{
            cout<<"Danik";
        }
    }

    return 0;





}