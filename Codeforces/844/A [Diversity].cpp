	#include <bits/stdc++.h>
	using namespace std;

	int main(int argc, char const *argv[])
	{
		string s;
		int k;
		cin>>s>>k;
		int len = s.length();
		if (len<k)
		{
			cout<<"impossible\n";
		}
		else
		{
			int check[26];
			for (int i = 0; i < 26; ++i)
			{
				check[i] = 0;
			}
			for (int i = 0; i < len; ++i)
			{
				check[s[i] - 'a']++;
			}
			int dis = 0;
			for (int i = 0; i < 26; ++i)
			{
				if (check[i] != 0)
				{
					dis++;
				}
			}
			int ans = k - dis;
			if (ans >= 0)
			{
				cout<<ans<<endl;
			}
			else
				cout<<"0\n";
			
		}
		return 0;
	}