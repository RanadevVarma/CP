#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iterator>
#include <stack>
#include <vector>

using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	int in[n] ;
	int sum = 0;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> in[i] ;
		sum = sum + in[i];
	}
	sort(in,in+n);
	int msum = 0;
	for(int i = n-1 ; i >= 0 ; i--)
	{
        msum = msum + in[i] ;     
		if(msum > sum-msum) 
		{
			cout << n-i << "\n";
			return 0;
		}
	}
}