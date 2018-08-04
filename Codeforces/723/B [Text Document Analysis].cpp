
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

const int maxlen = 300 ;
char in[maxlen] ;
int len ;
vector <char> pres ;

int main()
{
    cin >> len ;
    cin >> in ;
    int bi = 0 ;
    long long int maxl=0,ninside=0,size ;
    for(int i = 0 ; i < len ; i++)
    {
        size = pres.size();
        if(in[i]=='(')
        {
            bi = 1 ;
            maxl = max(maxl,size);
            pres.clear();
        }
        else if(in[i]==')')
        {
            bi = 0 ;
            if(size>0)
            ninside++;
            pres.clear();
        }
        else if(in[i]!='_')
        {
           pres.push_back(in[i]);
        }
        else if(in[i]=='_')
        {
            if(bi==0)
            {
                maxl = max(maxl,size);
            }
            else
            {
                if(size>0 && bi==1)
                ninside++;
            }
            pres.clear();
        }
    }
    size = pres.size();
    maxl = max(maxl,size);
    cout << maxl << " " << ninside << "\n";
    return 0 ;
}