#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std ;

int temp ;

int main()
{
	int n ;
	cin >> n ;
	int ans[n+1] ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> temp ;
		ans[temp] = i ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		cout << ans[i] << ' ' ;
	}

} 