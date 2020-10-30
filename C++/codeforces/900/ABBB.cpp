#include<iostream>
#include<stack>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t>0)
{
        string s;
        cin>>s;
        stack<char> st;
    //    cout<<t<<"+++STD+++++++++++++++++++++++++++++===============>>>>>>>>>>>"<<st.size()<<endl;

        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else
            {    
                if(st.top()==s[i]){
                    if(s[i]=='B'){
                        st.pop();

                    }
                    else{
                        st.push(s[i]);
                    }
                }
                else{
                    if(st.top()=='A'){

                        st.pop();

                    }
                    else{
                        st.push(s[i]);
                    }
                }
}


        // cout<<t<<"+++STD+++++++++++++++++++++++++++++===============>>>>>>>>>>>"<<st.size()<<endl;

        }
        cout<<st.size()<<endl;
        t--;
    }
    





}