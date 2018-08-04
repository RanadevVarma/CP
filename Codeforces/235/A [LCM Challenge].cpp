#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <iterator>
#include <algorithm>

using namespace std ;

long long int ans1,ans2,ans3,even,same;

int main()
{
	long long int in ;
	cin >> in ;
	long long int store = in;
	if(in==1)
	{
		cout << "1" << "\n";
		return 0 ;
	}
	else if(in==2)
	{
		cout << "2" << "\n";
	}
	else if(in==3)
	{
		cout << "6" << "\n";
	}
	else
	{
	    //Should find a largest prime <= in
	    if(in%2==1)
	    {
	    	cout << in*(in-1)*(in-2) ;
	    }
	    else
	    {
	    	if(in%3==0)
	    	{
	    		cout << (in-1)*(in-2)*(in-3) << "\n" ;
	    	}
	    	else
	    	{
	    		cout << in*(in-1)*(in-3) << "\n" ;
	    	}
	    }
	}
}