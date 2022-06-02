 
#include<iostream>

#include<vector>

using namespace std;
void shift(vector<int>& arr,int i,int m){
        int temp=arr[i];
        i++;
        while(i<m){
            int temp_temp=arr[i];
            arr[i]=temp;
            temp=temp_temp;
            i++;
        }
    }
void duplicateZeros(vector<int>& arr) {
        cout<<"here";
        for(int i=0;i<arr.size();i++){

            if(arr[i]!=0){
                continue;
            }
            shift(arr,i,arr.size());
            arr[i]=0;
            i++;


        }



    }

int main(){

 vector<int> a={1,0,2,3,0,4,5,0};
 duplicateZeros(a);
 for(auto i:a){
     cout<<i;
 }
return 0;
}
