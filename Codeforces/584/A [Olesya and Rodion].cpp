#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std ;

long long int mod = 1000000007 ;
long long int x,y ;

int main()
{
	int N,t ;
	cin >> N >> t ;
	if(t==10 && N==1)
	{
		cout << "-1" << "\n";
		return 0 ;
	}
	else if(t!=10)
	{
		for(int i = 0 ; i < N ; i++)
		{
			cout << t ;
		}
		return 0 ;
	}
	else
	{
		for(int i = 0 ; i < N-1 ; i++)
		{
			cout << "1" ;
		}
		cout << "0";
		return 0 ;
	}
}