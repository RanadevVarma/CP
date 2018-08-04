#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std ;

long long int count1,count2 ;

int main()
{
	long long int n ;
	cin >> n ;
	long long int in[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> in[i];
	}
	sort(in,in+n);
	cout << in[n-1] - in[0] << " " ;
	if(in[0]==in[n-1])
	{
		cout << (n*(n-1))/2 << "\n";
	}
	else
	{
		for(int i = 0 ; i < n-1 ; i++)
		{
			if(in[i]==in[0])
			{
				count1++;
			}
		}
		for(int i = n-1 ; i >=0 ; i--)
		{
			if(in[i]==in[n-1])
			{
				count2++;
			}
		}
		cout << count1*count2 << "\n";
	}
}