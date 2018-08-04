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

#define mod 1000000007

using namespace std ;

char in[200009],ans[200009];

int main()
{
    cin >> in ;
    char temp ;
    int len = strlen(in),flag;
    if(len<3)
    {
        cout << in << '\n';
        return 0 ;
    }
    ans[0] = '!';
    ans[1] = in[0] ;
    ans[2] = in[1] ;
    int aindex = 3 ;
    for(int i = 2 ; i < len ; i++)
    {
        flag = 0 ;
        if(in[i]==ans[aindex-1] && in[i]==ans[aindex-2])
        {
            flag = 1 ;
        }
        if(in[i]==ans[aindex-1] && ans[aindex-2]==ans[aindex-3])
        {
            flag = 1 ;
        }
        if(flag==0)
        {
            ans[aindex] = in[i];
            aindex++;
        }
    }
    for(int i = 1 ; i < aindex ; i++)
    {
        cout << ans[i] ;
    }
    cout << "\n";
    return 0 ;
}