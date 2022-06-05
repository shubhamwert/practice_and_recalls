class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       map<int,bool> mymap;
       for(auto i : arr){
           if(
               mymap[2*i] || (mymap[i/2] && i%2==0)){
               return true;
           }
            mymap[i]=true;          
           cout<<i<<endl;
           
       }
        return false;
    }
};
