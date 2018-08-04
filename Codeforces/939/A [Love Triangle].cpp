#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	int in[n+1] ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> in[i];
	}
	for(int i = 1 ; i <= n ; i++)
	{
		if(in[in[in[i]]]==i)
		{
            cout << "YES" << "\n" ;
            return 0 ;
		}
	}
	cout << "NO" << "\n";
}