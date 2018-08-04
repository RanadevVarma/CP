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
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int n,m ;
	cin >> n >> m ;
	if(n>=m)
	{
        while(m>0)
        {
        	cout << "BG" ;
        	n-- ;
        	m-- ;
        }
        while(n>0)
        {
        	cout << "B" ;
        	n--;
        }
	}
	else if(m>n)
	{
		while(n>0)
		{
			cout << "GB" ;
			n-- ;
			m-- ;
		}
		while(m>0)
		{
			cout << "G" ;
			m--;
		}
	}
	cout << "\n";
}