class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       map<int,bool> mymap;
       for(int i=0;i<nums.size();i++){
           mymap[i+1]=false;
       } 
       for(int i=0;i<nums.size();i++){
           mymap[nums[i]]=true;
       } 
       vector<int> v;
       for(int i=0;i<nums.size();i++){
           if(!mymap[i+1]){v.push_back(i+1);}
       } 
       return v;
    }
};