#include <bits/stdc++.h> 
using namespace std; 

int min(int x, int y, int z) 
{ 
	return min(min(x, y), z); 
} 

int func(string str1, string str2, int m, int n) 
{ 
	int arr[m + 1][n + 1]; 

	for (int i = 0; i <= m; i++) { 
		for (int j = 0; j <= n; j++) 
            {int p=0; 
			if (i == 0) 
				{arr[i][j] = j; 
				//cout<<arr[i][j];
				p++;}
			else if (j == 0) 
				{p++;
                arr[i][j] = i;
                //cout<<arr[i][j];} 

			else if (str1[i - 1] == str2[j - 1]) 
				{p++;
                arr[i][j] = arr[i - 1][j - 1];
                //cout<<arr[i][j];} 
			else
				{arr[i][j] = 1 + min(arr[i][j - 1], arr[i - 1][j], arr[i - 1][j - 1]);
				p++; 
				//cout<<arr[i][j];
		} }
	} 
	return arr[m][n]; 
} 

int main() 
{string str1 = "return"; 
string str2 = "returneed"; 
cout << func(str1, str2, str1.length(), str2.length()); 
return 0; 
} 
