class Solution {
public:
    
    int removeElement(vector<int>& arr, int val) {
        int c_size=arr.size();
        for(int j=0;j<c_size;j++)
        {
            if(arr[j]==val)
                {
                    for(int i=j;i<c_size-1;i++){
                        arr[i]=arr[i+1];
                         }
                    c_size--;
                    j--;
                }
            
        
        }
        
       return c_size; 
    }
};