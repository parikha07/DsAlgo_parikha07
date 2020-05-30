#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,count;
    cin>>t;
    for( int i=0; i<t; i++)
    {
    cin>>x;
    count=0;
    for(int j=1; j<=sqrt(x);++j)
    { 
        if(x%j==0)
        if(x/j==j)
        count++;
        else
        count=count+2;
    }    cout<<count<<endl;
   }
}
