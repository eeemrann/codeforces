#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a%2==0){
            int d=(a/2)*c;
            if(d<a*b){
                cout<<d<<endl;
            }
            else{
                cout<<a*b<<endl;
            }
        }
        else{
            int e=(a/2)*c+b;
            if(e<a*b){
                cout<<e<<endl;
            }
            else{
                cout<<a*b<<endl;;
            }
        }
    }
}