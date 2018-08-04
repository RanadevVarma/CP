#include <iostream>
#include <cstring>
#include <cmath>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int in[n][n];
    for(int i = 0 ; i < n ; i++)
    {
        in[i][0] = 1 ;
        in[0][i] = 1 ;
    }
    for(int i = 1 ;  i < n ; i++)
    {
        for(int j = 1 ; j < n ; j++)
        {
            in[i][j] = in[i-1][j]+in[i][j-1];
        }
    }
    cout << in[n-1][n-1] << "\n" ;
}