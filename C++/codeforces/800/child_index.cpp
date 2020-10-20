#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n[t];
    vector<int> c1,c2,c3;
    for(int i=1;i<=t;i++){
        int temp;
        cin>>temp;
        if(temp==1)
            c1.push_back(i);
        if(temp==2)
            c2.push_back(i);
        if(temp==3)
            c3.push_back(i);
    }   
    cout<<min(min(c1.size(),c2.size()),c3.size())<<endl;
    for(int i=0;i<c1.size()&&i<c2.size()&&i<c3.size();i++){
            cout<<c1[i]<<" "<<c2[i]<<" "<<c3[i]<<flush<<endl;
    }

    return 0;
}