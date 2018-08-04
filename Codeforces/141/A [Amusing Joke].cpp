#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std ;

int main()
{
	char a[101];
	char b[101];
	char c[101];
	cin >> a >> b >> c ;
	int x = strlen(a) ;
	int y = strlen(b) ;
	int z = strlen(c) ;
	int check[26] = {0} ;
	int match[26] = {0} ;
	for(int i = 0 ; i < x ; i++)
	{
		check[a[i]-'A']++;
	}
	for(int i = 0 ; i < y ; i++)
	{
		check[b[i]-'A']++;
	}
	for(int i = 0 ; i < z ; i++)
	{
		match[c[i]-'A']++;
	}
	for(int i = 0 ; i < 26 ; i++)
	{
		if(check[i]!=match[i])
		{
			cout << "NO" << "\n";
			return 0 ;
		}
	}
	cout << "YES" << "\n";
}