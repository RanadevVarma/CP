#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>
#include <string>

using namespace std ;

#define mod 1000000007


int main()
{
	int n,k,d ;
	cin >> n >> k >> d ;
	long long int pl[n+1] = {0} ;
	long long int sub[n+1] = {0} ;
	for(int i =  1 ; i <= n ; i++)
	{
		if(i<=k)
		{
			pl[i] = 1 ;
			if(i<d)
			{
				sub[i] = 1 ;
			}			
		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= k ; j++)
		{
			if(i>=j)
			{
				pl[i] = (pl[i] + pl[i-j])%mod ;
			}
		}
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= k ; j++)
		{
			if(i>=j && j<d)
			{
				sub[i] = (sub[i] + sub[i-j])%mod ;
			}
		}
	}
	cout << (pl[n]-sub[n]+mod)%mod << "\n";
}