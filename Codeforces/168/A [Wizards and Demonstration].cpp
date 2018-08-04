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
    int n,x,per ;
    cin >> n >> x >> per ;
    double req = (per*n)/(double)100 ;
    if(x>=req)
    {
        cout << "0" << "\n";
        return 0 ;
    }
    else
    {
        int count = 0 ;
        while(1)
        {
            if(x+count>=req)
            {
                cout << count << "\n";
                return 0 ;
            }
            else
            {
                count++;
            }
        }
    }
}