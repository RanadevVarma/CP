#include <iostream>
#include <algorithm>

#define INF  -1000000009

using namespace std ;

int ans1,ans2 ;

int sol ;

int main()
{
	int n ;
    cin >> n ;
    ans1 = INF ;
    ans2 = INF ;
    if(n>=0)
    {
        cout << n << "\n" ;
    }
    else
    {
        ans1 = n/10 ;
        ans2 = (n/100)*10  - (abs(n)%10) ;
        sol = max(ans1,ans2);
        sol = max(sol,n);
        cout << sol << "\n";
    }
}