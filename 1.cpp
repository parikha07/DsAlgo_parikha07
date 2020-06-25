#include <bits/stdc++.h> 
using namespace std; 

bool func_sum (int arr[], int n, int sum)  
{  if (sum == 0)  
        return true;  
    if (n == 0 && sum != 0)  
        return false;  
    if (arr[n-1] > sum)  
       return func_sum (arr, n-1, sum);  

    return func_sum (arr, n-1, sum) ||  
        func_sum (arr, n-1, sum-arr[n-1]);  
}  
bool func (int arr[], int n)  
{  
    int sum = 0;  
    for (int i = 0; i < n; i++)  
    sum += arr[i];  
  
    if (sum%2 != 0)  
    return false;  
    return func_sum (arr, n, sum/2);  
}  

int main()  
{  
    int arr[] = {3, 1, 5, 9, 12};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    if (func(arr, n) == true)  
        cout << "YES Possible hy!";  
    else
        cout << "NO Possible nhi!";  
    return 0;  
}  
  
