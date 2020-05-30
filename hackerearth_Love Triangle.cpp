#include<bits/stdc++.h>
using namespace std;
long long int func(long long int n)
{   if(n<9)
    {return n;}
    else
    {long long int a=n%9;
    return a+(10* func(n/9));
}}


int main()
{long long int x;
while(cin>>x)
{
cout<<func(x)<<endl;
}
}
