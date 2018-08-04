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
	cin >> n ;
	if(n%5==0)
	{
		cout << n/5 ;
	}
	else
	{
		cout << n/5 + 1 ;
	}
	cout << "\n";
}
