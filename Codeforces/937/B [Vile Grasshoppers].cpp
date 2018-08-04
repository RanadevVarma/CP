#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

long long int primeFactors(long long int n)
{
    while (n%2 == 0)
    {
        return 2;
    }
    for (long long int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            return i ;
        }
    }
    if (n > 2)
    {
    	return n;
    }
}

int main()
{
	long long int p,y ;
	scanf("%lld %lld",&p,&y);
	int temp = 0;
	while(y>p)
	{
		if(primeFactors(y)>p)
		{
			printf("%lld\n",y);
			return 0;
		}
		else
		{
			y--;
		}
	}
	printf("-1\n");
}