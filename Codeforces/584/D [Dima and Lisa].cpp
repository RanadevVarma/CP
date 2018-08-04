#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

int isprime(long long int a)
{
	for(long long int i = 2 ; i*i <= a ; i++)
	{
		if(a%i==0)
		{
			return 0 ;
		}
	}
	return 1 ;
}

int main()
{
	long long int n ;
	cin >> n ;
    long long int check = n ;
    int temp = 1 ;
    while(temp==1)
    {
    	if(isprime(check)==1)
    	{
    		temp = 0;
    		break ;
    	}
    	else
    	{
    		check--;
    	}
    }
    if(check==n)
    {
    	cout << "1" << "\n" << n << "\n";
    	return 0;
    }
    long long int diff = n - check ;
    int prime[diff+1];
    temp = -1 ;
    for(int i = 2 ; i <= diff ; i++)
    {
    	if(isprime(i)==1)
    	{
    		temp++;
    		prime[temp] = i ;
    	}
    }
    for(int i = 0 ; i <= temp ; i++)
    {
    	for(int j = 0 ;  j <= temp ; j++)
    	{
    		if(prime[i]+prime[j]==diff)
    		{
    			cout << "3" << "\n" << check << " " << prime[i] << " " << prime[j] << "\n";
    			return 0 ;
    		}
    	}
    }
    for(int i =  0 ; i <= temp ; i++)
    {
    	if(prime[i]==diff)
    	{
    		cout << "2" << "\n" << check << " " << prime[i] << "\n";
    		return 0;
    	}
    }
}