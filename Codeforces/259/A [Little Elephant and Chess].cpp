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

int main()
{
	char in[8][8] ;
	for(int i = 0 ; i < 8 ; i++)
	{
		for(int j = 0 ; j < 8 ; j++)
		{
			cin >> in[i][j];
		}
	}
	for(int i = 0 ; i < 8 ; i++)
	{
		for(int j = 0 ; j < 7 ; j++)
		{
            if(in[i][j]==in[i][j+1] || (in[i][0]==in[i][7]))
            {
            	cout << "NO" << "\n";
            	return 0;
            }
		}
	}
	cout << "YES" << "\n";
}