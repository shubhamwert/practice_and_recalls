class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max=-1;
        vector<int> v(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            v[i]=max;
            if(arr[i]>max){max=arr[i];}
            
            
            
            
        }
        
        return v;
        
    }
};