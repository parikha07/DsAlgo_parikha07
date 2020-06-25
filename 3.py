def func(s1, s2, m, n): 
	
	a = [[0 for x in range(n + 1)] for x in range(m + 1)] 
	for i in range(m + 1): 
		for j in range(n + 1): 
			if i == 0: 
				a[i][j] = j 
				#printf(a[i][j])

			elif j == 0: 
				a[i][j] = i 
				printf(a[i][j])
			elif s1[i-1] == s2[j-1]: 
				a[i][j] = a[i-1][j-1]
				#printf(a[i][j]) 

			
			else: 
				a[i][j] = 1 + min(a[i][j-1],a[i-1][j],a[i-1][j-1]) 
				#printf(a[i][j])
	return a[m][n] 

s1 = "return"
s2= "returnned"

print(func(s1, s2, len(s1), len(s2))) 

