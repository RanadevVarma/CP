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

int main()
{
    long long int n,k,out,first,second,fp,sp;
    cin >> n >> k ;
    int power[n],tpower[n],wins[n]={0};
    deque <int> line ;
    for(int i = 0 ; i < n ; i++)
    {
        line.push_back(i);
    }
    for(int i = 0 ; i < n ; i++)
    {
        cin >> power[i];
        tpower[i] = power[i];
    }
    sort(tpower,tpower+n);
    out = tpower[n-1];
    if(k>=n)
    {
        cout << out << "\n";
    }
    else
    {
        while(1)
        {
            first = power[line[0]];
            fp = line[0];
            second = power[line[1]];
            sp = line[1];
            line.pop_front();
            line.pop_front();
            if(first>second)
            {
                wins[fp]++;
                line.push_front(fp);
                line.push_back(sp);
            }
            else
            {
                wins[sp]++;
                line.push_front(sp);
                line.push_back(fp);
            }
            for(int i = 0 ; i < line.size() ; i++)
            {
                if(wins[line[i]]>=k)
                {
                    cout << power[line[i]] << "\n";
                    return 0 ;
                }
            }
        }
    }
}