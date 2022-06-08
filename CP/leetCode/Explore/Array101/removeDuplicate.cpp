class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertAt=0,replaceFrom=0,Last=-1000;
        if(nums.size()<2){return 1;}
        for(;replaceFrom<nums.size();replaceFrom++){
            if(nums[replaceFrom]>Last){
                nums[insertAt]=nums[replaceFrom];
                Last=nums[replaceFrom];
                insertAt++;
            }
        }
        return insertAt;
        
    }
};