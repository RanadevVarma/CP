#include <iostream>
#include <cstring>
#include <cmath>
#include <iterator>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>

using namespace std ;

int main()
{
    int n  , m ;
    cin >> n >> m ;
    int a , b ;
    double ans ;
    double tans ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a >> b ;
        double sin = a/(float)b ;
        tans = sin*(double)m ;
        if(i==0)
        {
            ans = sin*(double)m ;
        }
        else
        {
        	ans = min(ans,tans);
        }
    }
    printf("%.6lf\n",ans);
}