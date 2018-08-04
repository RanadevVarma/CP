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
	long long int a ;
	long long int b ;
	cin >> a >> b ;
	long long int diff = abs(b-a);
	int mid = (a+b)/2 ;
	long long int n = abs(mid-min(a,b));
	if(diff%2==0)
	{
		cout << n*(n+1) << "\n";
	}
	else
	{
		cout << (n*(n+1))/2 + ((n+1)*(n+2))/2 << "\n" ;
	}
}