#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int A[50],B[50];
    int i=0;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        for(int i=0; i<a; i++)
        {
            cin>>A[i];
        }
        int sum=0;
        for(int i=0; i<a-1; i++)
        {
            if((abs(A[i+1]-A[i])==5) || (abs(A[i+1]-A[i])==7))
            {
                B[i]=0;
            }
            else
            {
                B[i]=1;
            }
            sum=sum+B[i];
        }
        if(sum==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
