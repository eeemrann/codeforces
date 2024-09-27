
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,count=0;
        cin>>a;
        int b=a;
        while(b!=0){
            count++;
            b=b/10;
        }
        //cout<<count;
        int c=a%10;
        if(count==1){
            cout<<(((c-1)*10)+1)<<endl;
        }
        else if(count==2){
            cout<<(((c-1)*10)+3)<<endl;;
        }
        else if(count==3){
            cout<<(((c-1)*10)+6)<<endl;
        }
        else if(count==4){
            cout<<(((c-1)*10)+10)<<endl;
        }




    }
}
