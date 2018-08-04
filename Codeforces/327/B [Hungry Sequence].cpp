#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std ;

int prime(int n)
{
    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n%i==0)
        {
            return 0 ;
        }
    }
    return 1 ;
}

int main()
{
    int n ;
    cin >> n ;
    int count = 0;
    for(int i = 2 ; i <= 10000000 ; i++)
    {
        if(prime(i)==1)
        {
            cout << i << " " ;
            count++;
        }
        if(count>=n)
        {
            break;
        }
    }
} 