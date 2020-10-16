#include<iostream>

using namespace std;

int main(){
    int counter=0;
    string s;
    cin>>s;
    if(s.length()<7){
        cout<<"NO";
        return 0;
    }
    int i=0;
    cout<<"PROCESSING==";
    while(i+7<s.length()){
        cout<<"="<<i<<"   "<<endl<<s[i]<<"  "<<s[i+7]<<"+====>>>>";
        if(s[i]==s[i+7]){
            for(int j=1;j<=6;j++){
                if(s[i+j]!=s[i+7]){
                    cout<<"BROKEN FOR "<<s[i+j]<<endl;
                    break;
                }
                cout<<j;
                if(j==6){
                    cout<<"YES";
                    return 0;
                }
            }
            i=i+1;
        }
        else{
            cout<<"SKIPPING FOR"<<s[i]<<"  "<<s[i+7]<<" "<<endl;
            i++;
        }
        cout<<endl;

    }

    cout<<"NO";
    return 0;
}