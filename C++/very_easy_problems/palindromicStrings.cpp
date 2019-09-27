#include <bits/stdc++.h> 

using namespace std;

int main(){
    string s;
    cin>>s;
    bool np=false;
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            np=true;
            break;
        }
        else{
            continue;
        }

    }








    if(np){
        cout<<"NO"<<endl;
    }
    if(!np){
        cout<<"YES"<<endl;
    }



    return 0;
}