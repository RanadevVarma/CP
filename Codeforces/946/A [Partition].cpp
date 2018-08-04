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
	int in[n] ;
	int ans = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> in[i];
        if(in[i]>0)
        {
        	ans = ans + in[i];
        }
        else
        {
        	ans = ans - in[i];
        }
	}
	cout << ans << "\n";
}