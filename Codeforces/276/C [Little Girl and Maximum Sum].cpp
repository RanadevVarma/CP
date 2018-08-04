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
	int n,k,l,r ;
	cin >> n >> k ;
	long long int rq[n+1] = {0};
	long long int in[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> in[i] ;
	}
	for(int i = 1 ; i <= k ;i++)
	{
		cin >> l >> r ;
        rq[l-1]++;
        rq[r]--;
	}
	sort(in,in+n,greater<int>());
	long long int freq[n] = {0};
	long long int sum = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		sum = sum + rq[i] ;
		freq[i] = sum ;
	}
	sort(freq,freq+n,greater<int>());
	long long int ans = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		ans = ans + freq[i]*in[i];
	}
	cout << ans << "\n";
}