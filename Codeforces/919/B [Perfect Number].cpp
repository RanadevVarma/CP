#include <iostream>
#include <cstring>
#include <cmath>
#include <iterator>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>

using namespace std ;
int calc( int n)
{
	int sum = 0;
	while(n!=0)
	{
		sum = sum + (n%10) ;
		n = n/10 ;
	}
	return sum ;
}
int main()
{
	int n ;
	cin >> n ;
	int num = 0 ;
	long long int start = 1 ;
    while(num<n)
    {
        if(calc(start)==10)
        {
        	num++;
        }
        start++;
    }
    cout << start-1 << "\n";
}