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
	int n,k ;
	cin >> n >> k ;
	int in[n];
	int p,pe ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> p >> pe ;
		in[i] = (p*100) + (51-pe) ;
	}
	sort(in,in+n,greater<int>());
	int ans = 1 ;
	for(int i = k-2 ; i>=0 ; i--)
	{
		if(in[i]==in[k-1])
		{
            ans++;
		}
		else
		{
			break ;
		}
	}
	for(int i = k ; i < n ; i++)
	{
		if(in[i]==in[k-1])
		{
			ans++;
		}
		else
		{
			break ;
		}
	}
	cout << ans << "\n";
}