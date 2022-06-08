class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int pos,neg,i=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                pos=i;
                break;
            }
        }
        neg=pos-1;
        vector<int> v(nums.size(),0);
        while(pos<nums.size() && neg>=0){
            
            if(nums[pos]*nums[pos]<nums[neg]*nums[neg]){
                v[i]=nums[pos]*nums[pos];
                pos++;
            
            }
            else{
                v[i]=nums[neg]*nums[neg];
                neg--;
            }
            i++;
            
            
            
            
            
        }
        
        while(neg>=0){
                v[i]=nums[neg]*nums[neg];
                neg--;
                i++;
            
            }
        
         while(pos<nums.size()){
                v[i]=nums[pos]*nums[pos];
                pos++;
                i++;
            }
        return v;
        
        
        
        
    }
};