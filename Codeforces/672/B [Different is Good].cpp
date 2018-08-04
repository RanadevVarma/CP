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
	int check[27] = {0};
	for(int i = 0 ; i < n ; i++)
	{
        check[in[i]-'a'+1]++;
	}
	int extra = 0 ; int nu = 0;
	for(int i = 1 ; i <= 26 ; i++)
	{
		if(check[i]==0)
		{
			nu++;
		}
		else
		{
			extra = extra + check[i] - 1 ;
		}
	}
	if( extra > nu )
	{
		cout << "-1" << "\n";
	}
	else
	{
		cout << extra << "\n";
	}
}