#include<bits/stdc++.h>
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(b%3==0){
            cout<<a+b+ceil(c/3);
        }
        
    }
}