#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>
#include <string>

using namespace std ;

#define mod 1000000007


int main()
{
	int n ;
	cin >> n ;
	int a,b ;
	int res = 0 ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a >> b ;
		if(a>b)
		{
            res++;
		}
		else if(a<b)
		{
			res--;
		}
	}
	if(res>0)
	cout << "Mishka";
    else if(res<0)
    cout << "Chris";
    else
    cout << "Friendship is magic!^^";
}