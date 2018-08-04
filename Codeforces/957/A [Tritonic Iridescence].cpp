#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <iterator>

using namespace std ;

int count = 0;

int main()
{
	int n ;
	cin >> n ;
    char in[n+8] ;
    cin >> in ;
    for(int i = 0 ; i < n-1 ; i++)
    {
    	if(in[i]==in[i+1] && (in[i]!='?'))
    	{
    		cout << "No" << "\n" ;
    		return 0 ;
    	}
    }
    for(int i = 0 ; i < n ; i++)
    {
    	if((i==0 && in[i]=='?') || (i==n-1 && in[n-1]=='?'))
    	{
    		cout << "Yes" << "\n";
    		return 0;
    	}
        if(i>0 && i<n-1)
        {
        	if(in[i]=='?' && ((in[i-1]==in[i+1]) || (in[i-1]=='?') || (in[i+1]=='?')))
        	{
        		cout << "Yes" << "\n";
        		return 0;
        	}
        }
    }
    cout << "No" << "\n";
}