#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std ;

int temp ;

int main()
{
	char in[101];
	cin >> in ;
	int len = strlen(in);
	int up = 0 , lp = 0;
	if(in[0]<='z' && in[0]>='a')
	{
		temp = 1 ;
	}
    for(int i = 0 ; i < len ; i++)
    {
        if(in[i]<='Z' && in[i]>='A')
        {
        	up++;
        }
        else
        {
        	lp++;
        }
    }
    if(up==len || (temp==1 && lp==1 && up==len-1))
    {
    	for(int i = 0 ; i < len ;  i++)
    	{
    		if(in[i]<='Z' && in[i]>='A')
    		{
    			printf("%c",in[i]+32);
    		}
    		else
    		{
    			printf("%c",in[i]-32);
    		}
    	}
    }
    else
    {
    	cout << in ;
    }
    cout << "\n" ;
} 