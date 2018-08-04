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
	if(n==0)
	{
		cout << "1" << "\n";
	}
	else
	{
		if(n%4==1)
		{
			cout << "8" << "\n";
		}
		else if(n%4==2)
		{
			cout << "4" << "\n";
		}
		else if(n%4==3)
		{
			cout << "2" << "\n";
		}
		else
		{
			cout << "6" << "\n";
		}
	}
}