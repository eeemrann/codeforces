#include<bits/stdc++.h>
using namespace std;

int main(){
int a=1,b=2,c=3,d,e;
cin>>d>>e;
if((d==1 && e==2 )|| (e==1 && d==2) ){
    cout<<3;
}
else if((d==2 && e==3) || (e==2 && d==3)){
    cout<<1;
}
else{
    cout<<2;
}

}
