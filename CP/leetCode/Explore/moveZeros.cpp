class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numsToMove=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                numsToMove++;
            }else{
                nums[i-numsToMove]=nums[i];
                
            }
            
            
            
            
        }
        int n=nums.size();
        for(;numsToMove>0;numsToMove--){
            nums[n-numsToMove]=0;
        }
        
    }
};