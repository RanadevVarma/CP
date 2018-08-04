// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
//#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <iterator>
#include <iomanip>

using namespace std ;

#define MOD 1000000009LL
#define LOD 1000000006
#define pi 3.14159

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back
#define mp make_pair
#define fi first
#define se second

long long int mE(long long int x,long long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)       
        return mE((x*x)%MOD,n/2);
    else                     
        return (x*mE((x*x)%MOD,(n-1)/2))%MOD;

}

long long int mI(long long int A)
{
    return mE(A,MOD-2);
}

int main()
{
    lol1;
    lol2;
    vector <int> ans;
    long long int a,b;
    cin >> a >> b;
    ans.pb(b);
    while(1)
    {
        if(b%2==1 && b%10==1)
        {
            b/=10;
            if(b<a)
            {
                cout << "NO" << '\n';
                return 0;
            }
            else 
            {
                ans.pb(b);
            }
        }
        else if(b%2==0)
        {
            b/=2;
            ans.pb(b);
        }
        else
        {
            cout << "NO" << "\n";
            return 0;
        }
        if(a==b)
        {
            break;
        }
    }
    cout << "YES" << "\n" << ans.size() << "\n";
    while(ans.size())
    {
        cout << ans[ans.size()-1] << " ";
        ans.pop_back();
    }
    cout << "\n";
    return 0;
}