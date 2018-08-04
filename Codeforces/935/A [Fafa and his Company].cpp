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
	int temp ;
	int ans = 0;
	for(int i = 1 ; i < n ; i++)
	{
        temp = n-i ;
        if(temp%i==0)
        {
            ans++;
        }
	}
	cout << ans << "\n";
}