#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std ;

int temp ;

int main()
{
	int n ;
	cin >> n ;
	int h[n] ;
	int a[n] ;
	int ans = 0;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> h[i] >> a[i] ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j<=n ; j++)
		{
			if(h[i]==a[j] && j!=i)
			{
				ans++;
			}
		}
	}
	cout << ans << "\n" ;
} 
