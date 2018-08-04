#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iterator>

using namespace std ;

long long int mod = 1000000007 ;

int main()
{
    int n ;
    cin >> n ;
    long long int ans = pow(3,3*n) - pow(7,n);
    if(n<=10)
    {
    	cout << ans%mod << "\n" ;
    }
    else	
    {long long int num = 1,den = 1 ;
    for(int i = 1 ; i<=3*n ; i++)
    {
    	num = num*3 ;
    	num = num%mod ;
    }
    for(int j = 1 ; j<=n ; j++)
    {
    	den = den*7 ;
    	den = den%mod ;
    }
    if(num>den)
    cout << num - den << "\n" ;
    else
    cout << num + mod - den << "\n";
    }
}