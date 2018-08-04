#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std ;

int temp ;

int main()
{
	int n ;
	int m ;
	cin >> n >> m;
	int ava = min(n,m);
	if(ava%2==0)
	{
		cout << "Malvika";
	}
	else
	{
		cout << "Akshat";
	}
	cout << "\n" ;
} 
