#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std ;

int main()
{
	int pos[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int n ;
	cin >> n ;
	for(int i = 0 ; i < 14 ; i++)
	{
		if(n%pos[i]==0)
		{
			cout << "YES" << "\n" ;
			return 0;
		}
	}
	cout << "NO" << "\n" ;
} 