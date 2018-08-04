#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

int main()
{
    int n ;
    int p = 0 ;
    cin >> n ;
    int k ;
    cin >> k ;
    int in[n] ;
    int input ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> input ;
        input = 5 - input ;
        in[i] = input ;
    }
    sort(in,in+n);
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(in[i]>=k)
        {
 			p++;
        }
    }
    cout << p/3 << "\n";
}