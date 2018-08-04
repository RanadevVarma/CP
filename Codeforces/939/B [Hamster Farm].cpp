#include <iostream>

using namespace std ;

int main()
{
	long long int N ;
	cin >> N ;
	int k ;
	cin >> k ;
	long long int box ;
	long long int tmod ;
	long long int mod ;
	long long int ans1,ans2;
	if(N==0)
	{
		cin >> ans1 ;
		cout << "1" <<  " " << "0" << "\n";
	}
	else
	{
		for(int i = 1 ; i <= k ; i++)
		{
			cin >> box ;
			if(i==1)
			{
	            	mod = N%box ;
	                ans1 = (N-mod)/box ;
	                ans2 = i ;
			}
			else
			{
				tmod = N%box ;
				if(tmod < mod)
				{
					mod = tmod ;
					ans1 = (N-mod)/box ;
					ans2 = i ;
				}
			}
		}
		cout << ans2 << " " << ans1 << "\n";
    }
} 