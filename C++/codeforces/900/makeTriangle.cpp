    #include<iostream>
    using namespace std;

    int main(){
        int a,b,c;
        cin>>a>>b>>c;

        if(b>a && b>c){
            cout<< (b-(a+c)>=0?b-(a+c)+1:0); 
            return 0;
        }
        if(c>a && c>b){
            cout<< (c-(b+a)>=0?c-(b+a)+1:0); 
            return 0;

        }
        if(a>b && a>c){
            cout<< (a-(b+c)>=0?a-(b+c)+1:0); 
            return 0;

        }
        cout<< 0;
        return 0;
    }