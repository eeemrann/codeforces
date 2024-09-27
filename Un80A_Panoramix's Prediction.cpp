#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=2;i<=b/2;i++){
        if(b%i==0){
            cout<<"NO";
        }
    }
    
}