#include<iostream>
#include<vector>

using namespace std; 

int finds(vector<int> a,int t){
    for(int i=0;i<a.capacity();i++){
        if(a.at(i)==t){
            return t;
        }
        else
        {
            continue;
        }
        



    }
    return -1;

}
int main(){
    vector<int> g1;
    int a[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
        g1.push_back(a[i]);
    }
    cout<<"size is "<<g1.capacity()<<"\n";
    for(auto i = g1.begin();i!=g1.end();i++){
        cout<<*i<<"\n";


    }
    cout<< "element at 3 is "<<g1.at(2)<<endl;
    int k=finds(g1,5);
    cout<<"index of 5 is "<<k<<endl;
    return 0;
 }
// for (auto itr = index.begin(); itr != index.end(); ++itr) { 
//         cout << '\t' << itr->first 
//              << '\t' << itr->second << '\n'; 
//     } 

