#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v;
int prev=0;
for(int i=0;i<n+1;i++){
    int temp;
    cin>>temp;
    v.push_back(abs(temp-prev));


}

return 0;

}