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
	int n,m ;
	cin >> n >> m ;
	int in[m] ;
	for(int i = 0 ; i < m ; i++)
	{
		cin >> in[i];
	}
	int ini = 1;
	long long int ans = 0 ;
	for(int i = 0 ; i < m ; i++)
	{
		if(in[i]>ini)
		{
            ans = ans  + (in[i]-ini) ;
            ini = in[i];
		}
		else if(in[i]<ini)
		{
			ans = ans + (n+(in[i]-ini)) ;
			ini = in[i];
		}
	}
	cout << ans << "\n";
}