#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std ;

int sum = 0 ;

int main()
{
	int n,x ;
	int inp ;
	cin >> n >> x ;
	for(int i = 0 ; i < n ; i++)
	{
        cin >> inp ;
        sum = sum + inp ;
	}
	if(sum==0)
	{
		cout << "0" << "\n";
	}
	else if(sum>0)
	{
		cout << (x+sum-1)/x << "\n";
	}
	else
	{
		cout << (x-sum-1)/x << "\n";
	}
}