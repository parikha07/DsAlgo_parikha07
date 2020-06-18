// Example program
#include <iostream>
#include <string>
using namespace std;

int facto(int n)
{int fact[n];
fact[0]=1; 
fact[1]=1;
if(n==1 || n==0)
return 1;
else
return fact[n]=n*facto(n-1);}

int main()
{int n;
cin>>n;
cout<<facto(n);

  
}
