#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std ;

int ans ;

int main()
{
    int n ;
    cin >> n ;
    int brand[n] , opener[n] ;
    for(int i = 0 ; i < n ;  i++)
    {
        cin >> brand[i] >> opener[i] ;
    }
    for(int i = 0 ; i < n ; i++)
    {
        int flag = 0 ;
        for(int j = 0 ; j < n ; j++)
        {
            if(i!=j)
            {
                if(brand[i]==opener[j])
                {
                    flag = 1 ;
                    break ;
                }
            }
        }
        if(flag==0)
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}  