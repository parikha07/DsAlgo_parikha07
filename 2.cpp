#include <bits/stdc++.h> 
using namespace std; 
int maxProfit(int seats[], int k, int n) 
{ 
	priority_queue<int> pq; 
	for (int i = 0; i < k; i++) 
		pq.push(seats[i]); 
	int  = 0; 
	int c = 0; 
	while (c < n) { 
		int top = pq.top(); 
		pq.pop(); 
		if (top == 0) 
			break;
		 =  + top; 
		pq.push(top - 1); 
		c++; 
	} 
	return ; 
} 
int main() 
{ 
	int seats[] = { 2, 3, 4, 5, 1 }; 
	int k = sizeof(seats) / sizeof(int); 
	int n = 6; 

	cout << maxProfit(seats, k, n); 

	return 0; 
} 
