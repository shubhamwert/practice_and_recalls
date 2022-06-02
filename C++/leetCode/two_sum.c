#include <iostream> 
#include <iterator> 
#include <map> 
#include <vector> 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> index;
        vector<int> a;
        vector<int> b;
        
        for(auto it=nums.begin();it!=nums.end();it++){
            int comp=target - *it;
            if(index.find(comp) != index.end()){
                
                a.push_back(index.find(comp)->first);
                a.push_back(index.find(comp)->second);
            
                }
            else{
                index.insert({*it,comp});
            }
            
        }
        for(auto t=a.begin();t!=a.end();t++)
        {   
            for(int i=0;i<nums.capacity();i++){
                if(nums.at(i)==*t){
                    b.push_back(i);
                            }
                else
                    {
                        continue;
            }
        



                                }
        }
        
        
        
        return b ;
    }
};