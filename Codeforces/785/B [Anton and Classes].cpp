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
	long long int n ;
	scanf("%lld",&n);
	long long int sc[n],lc[n] ;
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%lld %lld",&sc[i],&lc[i]);
	}
	long long int m ;
    scanf("%lld",&m);
    long long int sp[m],lp[m] ;
	for(int i = 0 ; i < m ; i++)
	{
		scanf("%lld %lld",&sp[i],&lp[i]);
	}
	sort(sc,sc+n);
	sort(lc,lc+n);
	sort(sp,sp+m);
	sort(lp,lp+m);
	long long int l1 = lc[0] ; long long int s1 = sp[m-1];
	long long int l2 = lp[0] ; long long int s2 = sc[n-1];
	long long int ans1 = s1-l1 ;
	long long int ans2 = s2-l2 ;
	if(ans1<=0 && ans2<=0)
	{
		printf("0");
	}
	else
	{
		printf("%lld",max(ans1,ans2));
	}
}