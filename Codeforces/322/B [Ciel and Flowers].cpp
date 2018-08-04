#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <iterator>
#include <algorithm>

using namespace std ;

int main()
{
	long long int in[3];
	cin >> in[0] >> in[1] >> in[2] ;
	long long int a = in[0] , b = in[1] , c = in[2] ;
	long long int lans = 0 , ans = 0 ;
	for(int i = 0 ; i < 3 ; i++)
	{
		lans = 0;
        in[0] = a ;
        in[1] = b ;
        in[2] = c ;
        sort(in,in+3);
        if(in[0]>=i)
        lans = in[0] - i + (int)(in[1]-in[0]+i)/3 + (int)(in[2]-in[0]+i)/3;
        ans = max(lans,ans);
	}
	cout << ans << "\n";
}