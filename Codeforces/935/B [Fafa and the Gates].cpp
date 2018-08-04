#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	char in[n];
	cin >> in ;
	int pos[3];
	int ind ;
	pos[1] = 0 ;
	pos[2] = 0 ;
	if(in[0]=='U')
	{
		pos[2]++;
		ind = 1;
	}
	else if(in[0]=='R')
	{
		pos[1]++;
		ind = 2;
	}
	int ans = 0;
	int lind = ind ;
	for(int j = 1 ; j < n ; j++)
	{
		if(in[j]=='U')
		{
			pos[2]++;
		}
		else
		{
			pos[1]++;
		}
		if(pos[2]>pos[1])
		{
			lind = 1 ;
		}
		else if(pos[2]<pos[1])
		{
			lind = 2 ;
		}
		if(ind!=lind)
		{
			ans++;
			ind = lind;
		}
	}
	cout << ans << "\n";
}