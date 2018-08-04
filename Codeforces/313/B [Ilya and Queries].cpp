#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

char in[100007];

int main()
{
	cin >> in ;
	int len = strlen(in);
	int dp[len+1];
	dp[1]= 0 ;
	for(int  i = 1 ; i < len ; i++)
	{
		if(in[i]==in[i-1])
		{
			dp[i+1] = dp[i] + 1 ;
		}
		else
		{
			dp[i+1] = dp[i];
		}
	}
	int m ;
	cin >> m ;
	int l,r ;
	for(int i = 0 ; i < m ; i++)
	{
        cin >> l >> r ;
        cout << dp[r] - dp[l] << "\n";
	}
}