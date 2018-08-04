#include <iostream>
#include <cstring>
#include <cmath>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    long long int ans = 0;
    int i = 1 ;
    while(i<=n-1)
    {
        ans = ans + (n-i)*i ;
        i++;
    }
    cout << ans+n << "\n" ;
}