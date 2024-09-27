#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        while(a--){
            int b;
            cin>>b;
        v.push_back(b);
        }
        sort(v.begin(),v.end());
        int c=v[ceil(v.size()/2)];
        while(c=c+1 && v!=sort(v.begin(),v.end())){
            count++;
            

        }

    }
}