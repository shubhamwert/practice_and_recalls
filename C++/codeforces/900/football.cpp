#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int score=1;
    string team1,team2;
    cin>>team1;
    for(int i=0;i<n-1;i++){
        string scorer;
        cin>>scorer;
        if(scorer==team1){
            score++;
        }
        else{
            team2=scorer;
            score--;
        }
    }
    cout<<(score>0?team1:team2)<<endl;


    return 0;
}