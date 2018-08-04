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
	int in[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> in[i];
	}
	sort(in,in+n);
	int up = in[n-1];
	int ans = 0;
	for(int i = 1 ; i <= up ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(i==in[j])
			{
                ans++;
                break;
			}
		}
	}
	cout << ans << "\n";
}