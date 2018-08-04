#include <iostream>

using namespace std ;

int main()
{
	int n,k ;
	cin >> n >> k ; 
	int in[n];
	int pos,ans ;
	int first[n-1];
	int last[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> in[i];
		if(i == 0)
		{
			pos = in[0];
			ans = in[0];
		}
		else
		{
			pos = min(pos,in[i]);
			ans = max(ans,in[i]);
		}
	}
	for(int i = 0 ; i < n-1 ; i++)
	{
		if(i==0)
		{
			first[0] = in[0];
		}
		else
		{
			first[i] = min(first[i-1],in[i]);
		}
	}
	for(int i = n-1 ; i >=1 ; i--)
	{
        if(i==n-1)
        {
        	last[i] = in[i];
        }
        else
        {
        	last[i] = min(last[i+1],in[i]); 
        }
	}
	int ans2 ;
	for(int i = 0 ; i < n-1 ; i++)
	{
        if(i==0)
        {
        	ans2 = max(first[i],last[n-i-1]);
        }
        else
        {
        	ans2 = max(ans2,max(first[i],last[n-i-1]));
        }
	}
	if(k==1)
	{
		cout << pos << "\n";
	}
	else if(k>=3)
	{
		cout << ans << "\n";
	}
	else
	{
        if(in[0]==ans || in[n-1]==ans)
        {
        	cout << ans << "\n";
        }
        else
        {
            cout << ans2 << "\n";
        }
	}
} 