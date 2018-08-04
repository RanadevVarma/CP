#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std ;

int main()
{
    int n,k ;
    cin >> n >> k ;
    char in[n];
    cin >> in ;
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        int count = 0;
        for(int j = 0 ; j < n ; j++)
        {
            if(in[j]==in[i])
            {
                count++;
            }
        }
        ans = max(ans,count);
    }
    if(ans>k)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" ;
    }
    
}