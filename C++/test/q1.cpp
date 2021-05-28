#include<iostream>


using namespace std;

int main(){
    int k;
    string s;
    
    getline(cin,s);
    cin>>k;
    int n=s.length();
    int count=0;
    string word="";
    s=s+" ";
    for(auto x:s){
        if(x==' '){
            string temp="";
            for(int i=0;i<word.length();i++){
                temp=temp+word[(i+k)%word.length()];


            }
            // cout<<temp<<endl<<temp.compare(word)<<endl;
            if (temp.compare(word)==0){
            count++;
            }
            word="";
        }
        else{
            word=word + x;

        }


    }
    cout<<count;
    
   return 0; 
}