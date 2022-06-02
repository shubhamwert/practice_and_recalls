
// Goki recently had a breakup, so he wants to have some more friends in his life. Goki has N people who he can be friends with, so he decides to choose among them according to their skills set Yi(1<=i<=n). He wants atleast X skills in his friends.
// Help Goki find his friends.

//  INPUT
// First line of the input contains an integer N denoting the number of people.

// Next line contains a single integer X - denoting the minimum skill required to be Goki's friend. 

// Next n lines contain one integer Y - denoting the skill of ith person.

// OUTPUT
// For each person print if he can be friend with Goki. 'YES' (without quotes) if he can be friends with Goki else 'NO' (without quotes).





#include <bits/stdc++.h> 
using namespace std;

int main(){
    int d,tf=0;
    cin>>d;
    while(d>0){
        float r,x,td;
        cin>>r>>x;
        td=100*x;
        if(td>=44.0*r/7){
            tf++;
        }

        d--;
    }

    cout<<tf;

    return 0;
}