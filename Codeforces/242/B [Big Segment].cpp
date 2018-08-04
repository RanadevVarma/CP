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
	int n ;
	cin >> n ;
	int x[n],y[n] ;
	int tx[n],ty[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> x[i] >> y[i] ;
		tx[i] = x[i] ;
		ty[i] = y[i] ;
	}
	sort(tx,tx+n);
	sort(ty,ty+n);
	int start = tx[0] ;
	int end = ty[n-1] ;
	for(int i = 0 ; i < n ; i++)
	{
		if(x[i]<=start && y[i]>=end)
		{
			cout << i+1 << "\n";
			return 0 ;
		}
	}
	cout << "-1" << "\n" ;
}