#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(3);
    int a,t;
    cin>>t;
    while(t--){
        for(int i=0;i<3;i++){
        cin>>v[i];
        }
        sort(v.begin(),v.end());
    cout<<(v[2]-v[1])<<endl;

    }
    

}