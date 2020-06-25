#include <bits/stdc++.h> 
using namespace std; 

int create_max(int a, int b); 

int func( char *X, char *Y, int m, int n ) 
{ 
	if (m == 0 || n == 0) 
		return 0; 
	if (X[m-1] == Y[n-1]) 
		return 1 + func(X, Y, m-1, n-1); 
	else
		return create_max(func(X, Y, m, n-1), func(X, Y, m-1, n)); 
} 
int create_max(int a, int b) 
{ 
	return (a > b)? a : b; 
} 


int main() 
{ 
	char X[] = "AGGT"; 
	char Y[] = "GTXAB"; 
	
	int m = strlen(X); 
	int n = strlen(Y); 
	
	cout<<"Length of LCS is "<< func( X, Y, m, n ) ; 
	
	return 0; 
} 

