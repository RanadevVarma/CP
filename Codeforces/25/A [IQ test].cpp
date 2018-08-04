#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std ;

int ans,sum;

int main()
{
    int even,odd,counteven = 0 ,countodd = 0 ;
    int n,in;
    cin >> n ;
    int i = 1 ;
    while(n--)
    {
        cin >> in ;
        if(in%2==0)
        {
            even = i ;
            counteven++;
        }
        else
        {
            odd = i ;
            countodd++;
        }
        i++;
    }
    if(countodd==1)
    {
        cout << odd << "\n";
    }
    else
    {
        cout << even << "\n";
    }
}  