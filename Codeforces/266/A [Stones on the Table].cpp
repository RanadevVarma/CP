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
	cin >> n ;
	char in[n];
	cin >> in ;
	int occ = 0;
	int ans =  0;
	for(int i = 0 ; i < n-1 ; i++)
	{
        if(in[i]==in[i+1])
        {
        	occ++;
        }
        else
        {
        	ans = ans + occ ;
        	occ = 0;
        }
	}
	ans = ans + occ ;
	cout << ans << "\n";
}