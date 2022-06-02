#include<iostream>
#include<vector>
#include <map>
int removeDuplicate(vector<int> &nums){

    for(int i=0;i<nums.size();i++){
        print("%d",&nums[i])
    }

}

int main(){

    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    removeDuplicate(v);

    return 0;
}