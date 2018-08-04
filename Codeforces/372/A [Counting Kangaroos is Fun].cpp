#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int in[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> in[i] ;
    }
    sort(in,in+n);
    int loc = n/2 ;
    int max = n ;
    for(int i = 0 ; i < n/2 ; i++)
    {
        while(loc<n)
        {
            if(in[i]*2<=in[loc])
            {
                loc++;
                max--;
                break;
            }
            else
            {
                loc++;
            }
        }
    }
    cout << max << "\n";
} 