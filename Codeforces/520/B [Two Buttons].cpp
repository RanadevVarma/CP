#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std ;

int main()
{
    int n , m ;
    cin >> n >> m ;
    int ans = 0;
    while(m>n)
    {
        if(m%2==0)
        {
            ans++;
            m = m/2 ;
        }
        else
        {
            ans = ans + 2 ;
            m = (m+1)/2 ;
        }
    }
    cout << (n-m)+ans  << "\n" ;
}