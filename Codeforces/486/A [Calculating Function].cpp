#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std ;

char temp[20] ;

int main()
{
	long long int n ;
	cin >> n ;
	if(n%2==0)
	{
		cout << n/2 << "\n" ;
	}
	else
	{
		cout << -1 - n/2 << "\n" ;
	}
}