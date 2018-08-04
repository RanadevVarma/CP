#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <iterator>

using namespace std ;

int ans ;

int main()
{
	int n,temp ;
	cin >> n ;
	int in[5001] = {0} ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> temp ;
		in[temp]++;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		if(in[i]==0)
		{
            ans++;
		}
	}
	cout << ans << "\n";
}