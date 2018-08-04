#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std ;

int ans ;

int main()
{
	int n ;
	cin >> n ;
	int gmin,gmax ;
	int first,curr ;
	cin >> first ;
	gmin = first ;
	gmax = first ;
	for(int i = 1 ; i < n ; i++)
	{
        cin >> curr ;
        if(curr<gmin)
        {
        	ans++;
        	gmin = curr ;
        }
        else if(curr>gmax)
        {
        	ans++;
        	gmax = curr ;
        }
	}
	cout << ans << "\n";
}