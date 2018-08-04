#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
#include <stdio.h>

#define INF  -1000000009

using namespace std ;

int main()
{
	int n , k , temp , index ;
    long long int sum = 0 , tsum = 0 ;
    cin >> n >> k ;
    int psum[n+1] = {0} ;
    for(int i = 1 ; i <= n ; i++)
    {
        if(i==1)
        {
            cin >> psum[i];
        }
        else
        {
            cin >> temp ;
            psum[i] = psum[i-1] + temp ;
        }
    }

    for(int i = 0 ; i < n-k+1 ; i++)
    {
        if(i==0)
        {
            index = i ;
            sum = psum[i+k] - psum[i] ;
        }
        else
        {
            tsum = psum[i+k] - psum[i] ;
            if(tsum<sum) 
            {
                index = i ;
                sum = tsum ;
            }
        }
    }
    cout << index+1 << "\n";
}