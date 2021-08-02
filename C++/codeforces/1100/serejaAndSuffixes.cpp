#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n,0);
    // vector<bool> notunique(n,false);
    map<int,bool> notunique;
    for(int i=0;i<n;i++)
        {   int temp;
            cin>>temp;
            a[i]=temp;
        }
    vector<int> dp(n,0);
    for(int i=n-1;i>=0;i--){
        if(!notunique[a[i]]){
            dp[i]++;
            notunique[a[i]]=true;

        }
        
    }
    for(int i=n-2;i>=0;i--){
        dp[i]+=dp[i+1];
    }
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        // cout<<"+++++"<<temp<<"+++++++";
        cout<<dp[temp-1]<<endl;
    }
    return 0;
}