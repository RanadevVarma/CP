#include <iostream>
#include <algorithm>

using namespace std ;

int main()
{
	long long int n,k ;
	cin >> n >> k ;
	long long int joy[n];
	long long int f,t;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> f >> t ;
		if(t<=k)
		{
			joy[i] = f ;
		}
		else
		{
            joy[i] = f + (k-t) ;
		}
	}
	sort(joy,joy+n);
	cout << joy[n-1] << "\n";
}