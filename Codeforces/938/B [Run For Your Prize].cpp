#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iterator>
#include <stack>
#include <vector>

using namespace std ;

long long int min(long long int a , long long int b , long long int c)
{
	if(a<=b && a<=c)
	{
		return a;
	}
	else if(b<=a && b<=c)
	{
		return b ;
	}
	else
	{
		return c;
	}
}


int main()
{
    int n ;
    cin >> n ;
    int in[n];
    for(int i = 0 ; i < n ; i++)
    {
    	cin >> in[i];
    }
    int temp = 0;
    int ans1 = 1,ans2 = 1000000;
    for(int i = 0 ; i < n ; i++)
    {
        if(in[i]<=500000)
        {
            ans1 = max(ans1,in[i]);
        }
        else
        {
        	ans2 = min(ans2,in[i]);
        }
    }
    ans1 = ans1-1;
    ans2 = 1000000-ans2;
    cout << max(ans1,ans2) << "\n" ;
}