#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std ;

int temp ;

int main()
{
	char in[200] ;
	cin >> in ;
	int l = strlen(in);
	for(int i = 0 ; i < l ; i++)
	{
		if(in[i]=='W' && in[i+1]=='U' && in[i+2]=='B')
		{
			i = i+2;
			temp++;
		}
		else
		{
			if(temp!=0)
			{
				temp = 0;
				cout << " " ;
			}
			cout << in[i];
		}
	}
	cout << "\n" ;
}
