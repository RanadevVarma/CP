// Author            -  Ranadev Varma
// Codeforces Handle -  Ranadev_CaptainR
// Codechef Handle   -  ranadev
 
#pragma comment(linker, "/stack:200000000")
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

#define MOD 1000000007

#define lol1 ios::sync_with_stdio(false)
#define lol2 cin.tie(NULL);cout.tie(NULL)

#define FOR(i,a,b)  for(int i = a ; i < b ; i++)
#define RFOR(i,a,b) for(int i = a ; i > b ; i--)

#define pb push_back

int main()
{
    lol1;
    lol2;
    string in;
    char temp;
    int len,diff=-99999999,cdiff,sdigit;
    cin >> in;
    len = in.length();
    vector <int> evenplaces ;
    FOR(i,0,len)
    {
        if((in[i]-'0')%2==0)
        {
            evenplaces.pb(i);
        }
    }
    if(evenplaces.size()==0)
    {
        cout << "-1" << "\n";
        return 0 ;
    }
    FOR(i,0,evenplaces.size())
    {
        sdigit = evenplaces[i];
        if(in[len-1]-'0'>in[evenplaces[i]]-'0')
        {
            temp = in[sdigit];
            in[sdigit] = in[len-1];
            in[len-1] = temp;
            cout << in << '\n';
            return 0 ;
        }
    }
    temp = in[sdigit];
    in[sdigit] = in[len-1];
    in[len-1] = temp;
    cout << in << '\n';
    return 0 ;
}