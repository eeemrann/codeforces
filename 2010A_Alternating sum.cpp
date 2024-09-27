#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,A[1000];
    cin>>x;
    while(x--){
        int a;
        int e=0;  int f=0;
        cin>>a;
        for(int i=0;i<a;i++){
            cin>> A[i];
        }
        for(int i=0;i<a;i+=2){
            e=e+A[i];
        }
        for(int i=1;i<a;i+=2){
            f=f+A[i];
        }
        cout<<e-f<<endl;
    }
}