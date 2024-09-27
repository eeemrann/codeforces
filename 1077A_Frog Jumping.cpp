#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,t;
    cin>>t;
    while(t--){
    cin>>a>>b>>c;

    if(c%2==0){
        long long x=((c/2)*a)-((c/2)*b);
        cout<<x<<endl;
    }
    else{
        long long y=(((c/2)+1)*a)-((c/2)*b);
        cout<<y<<endl;;
    }
    }
}