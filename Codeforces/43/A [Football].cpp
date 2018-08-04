#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>
#include <string>

using namespace std ;


int main()
{
	int n ;
	cin >> n ;
    string s1,s2,s3 ;
    int g1 = 0 , g2 = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(i==0)
		{
			cin >> s1 ;
			g1++;
		}
		else
		{
			cin >> s2 ;
			if(s1==s2)
			{
				g1++;
			}
			else
			{
				g2++;
				s3 = s2 ;
			}
		}
	}
    if(g1>g2)
    {
    	cout << s1 << "\n";  
    }
    else
    {
    	cout << s3 << "\n";
    }
}