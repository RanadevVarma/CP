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

int palindrome(char in[])
{
    int len = strlen(in);
    for(int i = 0 ; i < len/2 ; i++)
    {
        if(in[i]!=in[len-i-1])
        {
            return 0 ;
        }
    }
    return 1 ;
}
int main()
{
    int n,p,middle;
    cin >> n >> p ;
    char in[n],dum[n];
    cin >> in ;
    p--;
    middle = (n-1)/2 ;
    if(p>middle)
    {
        p = n-p-1 ;
    }
    int start = middle , end = 0 ;
    for(int i = 0 ; i <= middle ; i++)
    {
        if(in[i]!=in[n-i-1])
        {
            start = i ;
            break ;
        }
    }
    for(int i = middle ; i >= 0 ; i--)
    {
        if(in[i]!=in[n-i-1])
        {
            end = i ;
            break ;
        }
    }
    if(palindrome(in)==1)
    {
        cout << "0" << "\n";
        return 0 ;
    }
    //cout << start << " " << end << "\n";
    long long int ans1 = 0 , ans2 = 0 , ans3 = 0, diff;
    if(end<=p)
    {
        for(int i = p ; i >= start ; i--)
        {
            diff = abs(in[n-i-1]-'a'-(in[i]-'a'));
            ans3 = ans3 + min(diff,26-diff);
        }
        ans3 = ans3 + (p-start);
        cout << ans3 << "\n";
        return 0 ;
    }
    if(start>=p)
    {
        for(int i = p ; i <= end ; i++)
        {

            diff = abs(in[n-i-1]-'a'-(in[i]-'a'));
            ans3 = ans3 + min(diff,26-diff);
        }
        ans3 = ans3 + (end-p);
        cout << ans3 << "\n";
        return 0 ;
    }
    //Method 1
    for(int i = p ; i <= end ; i++)
    {
        diff = abs(in[n-i-1]-'a'-(in[i]-'a'));
        ans1 = ans1 + min(diff,26-diff);
    }
    ans1 = ans1 + 2*(end-p) + 1;
    for(int i = p-1 ; i >= start ; i--)
    {
        diff = abs(in[n-i-1]-'a'-(in[i]-'a'));
        ans1 = ans1 + min(diff,26-diff);
    }
    ans1 = ans1 + (p-1-start);
    //Method 2
    for(int i = p ; i >= start ; i--)
    {
        diff = abs(in[n-i-1]-'a'-(in[i]-'a'));
        ans2 = ans2 + min(diff,26-diff);
    }
    ans2 = ans2 + 2*(p-start) + 1;
    for(int i = p+1 ; i <= end ; i++)
    {
        diff = abs(in[n-i-1]-'a'-(in[i]-'a'));
        ans2 = ans2 + min(diff,26-diff);
    }
    ans2 = ans2 + end-p-1 ;
    cout << min(ans1,ans2) << "\n";
    return 0 ;
}