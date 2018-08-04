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
	long long int a , b ;
	cin >> a >> b ;
	while(a>=2*b || b>=2*a || a==0 || b==0)
	{
		if(a==0 || b==0)
		{
			break ;
		}
		else if(a>=2*b)
		{
			long long int n = a/(2*b) + 1 ;
			a = a - (n-1)*2*b ;
		}
		else if(b>=2*a)
		{
			long long int n = b/(2*a)+1;
			b = b - (n-1)*2*a ;
		}
	}
	cout << a << " " << b << "\n";
}