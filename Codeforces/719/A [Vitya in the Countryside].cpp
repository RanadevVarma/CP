#include <iostream>
#include <vector>
#include <iterator>

using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	int in[n+1] ;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> in[i] ;
    }
	if(n==1 && in[1]!=15 && in[1]!=0)
	{
	    printf("-1");
	}
	else if(n==1 && in[1]==0)
	{
	    printf("UP");
	}
	else if(n==1 && in[1]==15)
	{
	    printf("DOWN");
	}
	else
    {
    	if(in[n]==15)
    	{
    	    cout << "DOWN" ; 
    	}
    	else if(in[n]==0)
    	{
    	    cout << "UP" ;
    	}
    	else if(in[n-1]<in[n])
    	{
    	    cout << "UP" ;
    	}
    	else
    	{
    	    cout << "DOWN" ;
    	}
    }
}