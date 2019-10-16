// C++ program to count number of ways any 
// given integer x can be expressed as n-th 
// power of unique natural numbers. 
#include<bits/stdc++.h> 
using namespace std; 

// Function to calculate and return the 
// power of any given number 
int power(int num, unsigned int n) 
{ 
	if (n == 0) 
		return 1; 
	else if (n%2 == 0) 
		return power(num, n/2)*power(num, n/2); 
	else
		return num*power(num, n/2)*power(num, n/2); 
} 

int checkRecursive(int x, int n, int curr_num = 1, 
				int curr_sum = 0) 
{ 
	
	int results = 0; 

	int p = power(curr_num, n); 
	while (p + curr_sum < x) 
	{ 
		results += checkRecursive(x, n, curr_num+1, 
										p+curr_sum); 
		curr_num++; 
		p = power(curr_num, n); 
	} 

	if (p + curr_sum == x){
		results++; 
	}

	return results; 
} 

int main() 
{ 
	int x = 10, n = 2; 
	cout << checkRecursive(x, n); 
	return 0; 
} 
