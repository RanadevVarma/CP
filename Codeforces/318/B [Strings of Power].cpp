
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
#include <deque>

using namespace std ;

int main()
{
    char in[1000009];
    cin >> in ;
    int len = strlen(in);
    int pre = 0 ;
    long long int ans = 0;
    for(int i = 0 ; i <= len-5 ; i++)
    {
    	if(in[i]=='h' && in[i+1]=='e' && in[i+2]=='a' && in[i+3]=='v' && in[i+4]=='y')
    	{
            pre++;
    	}
    	if(in[i]=='m' && in[i+1]=='e' && in[i+2]=='t' && in[i+3]=='a' && in[i+4]=='l')
        {
            ans+=pre;
        } 
    }
    cout << ans << "\n";
    return 0 ;
}