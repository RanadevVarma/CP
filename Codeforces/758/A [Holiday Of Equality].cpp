#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int in[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i];
    }
    sort(in,in+n);
    int max = in[n-1];
    long long int ans = 0;
    for(int i = 0 ; i <= n-2 ; i++)
    {
        ans = ans + (max-in[i]);
    }
    cout << ans << "\n" ;
}