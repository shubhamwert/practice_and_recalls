#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n){
for(int i=2;i<=sqrt(n);i++){
    // cout<<"  i ==  "<<i<<"   n === "<<n<<endl;
if(n%i==0){
    return true;
}
}


return false;
}
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<4<<" "<<n-4;
        return 0;

    }
    for(int i=4;i<n;i++){
        if(!prime(i)){
            continue;
        }
        if(prime(n-i)){
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }



    return 0;
}