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
	char in[12] ;
	cin >> in ;
	int len = strlen(in);
	for(int i = 0 ; i < len ; i++)
	{
		if(in[i]!='1' && in[i]!='4')
		{
			cout << "NO" << "\n";
			return 0 ;
		}
	}
	if(in[0]!='1')
	{
		cout << "NO" << "\n";
		return 0 ;
	}
	int count = 0;
	for(int i = 0 ; i < len ; i++)
	{
		if(in[i]=='4')
		{
			count++;
		}
		else
		{
			count = 0;
		}
        if(count>=3)
		{
            cout << "NO" << "\n";
            return 0 ;
		}
	}
	cout << "YES" << "\n";
}