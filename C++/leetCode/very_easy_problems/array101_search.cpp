#include<iostream>
#include<vector>
using namespace std;




int binary_search(vector<int> &a,int target){

 int l=0;
 int r=a.size();
 while(l<r){
        int mid=(l+r)/2;

        if(a[mid]==target){
            return mid;
        }


        if(a[mid]> target){
                r=mid;
        }
        else{
            if(a[mid]<target){
                l=mid;
            }
        }









 }

return 0;

}




int main(){
    int n;
    cin>>n;
    vector<int> a;
    int input;
    while(n>0){
        cin>>input;
        a.push_back(input);
        n--;
    }
    int target;
    cin>>target;
    cout<<binary_search(a,target);
    // for(auto i=a.begin();i!=a.end();i++)
    //     cout<<*i;
    
    return 0;
}
