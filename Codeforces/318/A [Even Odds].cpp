#include <iostream>
#include <vector>
#include <cstring>

using namespace std ;

int ans,sum;

int main()
{
    long long int n,k ;
    cin >> n >> k ;
    if(n%2==0)
    {
        if(k<=n/2)
        {
            cout << 2*k-1;
        }
        else
        {
            k = k - n/2 ;
            cout << 2*k << "\n" ;
        }
    }
    else
    {

        if(k<=(n+1)/2)
        {
            cout << 2*k-1;
        }
        else
        {
            k = k - ((n+1)/2) ;
            cout << 2*k << "\n" ;
        }
    }
}