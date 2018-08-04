#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <iterator>

using namespace std ;

int main()
{
	int n,temp,k,m;
	cin >> n ;
	vector <int> c ;
	for(int i = 0 ; i < n ; i++)
	{
        cin >> temp ;
        c.push_back(temp);
	}
	sort(c.begin(),c.end());
    cin >> k ;
    while(k--)
    {
    	cin >> m ;
    	int index  = upper_bound(c.begin(),c.end(),m) - c.begin()  ;
    	cout << index << "\n";
    }
}