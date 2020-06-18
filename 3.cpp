// Example program
#include <iostream>
#include <string>
using namespace std;

int facto(int n)
{int fact[n];
fact[0]=2; 
fact[1]=2;

if(n==1 || n==0)
return 2;
else
for(int i=1; i<n; i++)

return fact[n]=2*facto(n-1)+ 2*facto(n);}

int main()
{int n;
cin>>n;
cout<<facto(n);

  
}
