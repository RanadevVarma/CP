#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iterator>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int in[n+1] = {0};
    int sol = 0;
    int now  = 0;
    for(int i = 1 ; i <= 2*n ; i++)
    {
    	int temp ;
        cin >> temp ;
        in[temp]++;
        if(in[temp] == 1)
        {
        	now++;
        }
        else if(in[temp] == 2)
        {
        	now--;
        }
        sol = max(now,sol);
    }
    cout << sol << "\n" ;
}