//Binary to decimal

#include <bits/stdc++.h>
using namespace std;

int real(string n)
{ int original=stoi(n);
 int temp=original;
int dec=0;
int base=1;
    
while(temp)
{int a=temp%10;
temp=temp/10;
dec=dec+a*base;
base=base*2;}
return dec;
}
 
void func(string n)
{string original=n;
//cout<<original<<endl;
string temp=n;
 int c;
 int length=temp.length();
//cout<<length<<endl;
for( int i=0; i<length; i++)
{
    if((temp[i]!= '1') && (temp[i]!= '0'))
    {
    cout<<"Invalid input";
    break;
    }
    else
    c=1;
}
if(c==1)
cout<<real(original);
}
int main()
{string t;
cin>>t;
func(t);
    }
