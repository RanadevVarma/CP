#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iterator>
#include <stack>
#include <vector>

using namespace std ;

int i ;

int bad(char in[],int n)
{
	int len = n ;
	for(int i = 0 ; i < len ; i++)
	{
		if((in[i]=='a'|| in[i]=='e'||in[i]=='i'||in[i]=='o'||in[i]=='u' || in[i]=='y')&&(in[i+1]=='a'|| in[i+1]=='e'||in[i+1]=='i'||in[i+1]=='o'||in[i+1]=='u' || in[i+1]=='y'))
		{
			return i+1 ;
		}
	}
	return 101;
}


int main()
{
    int n ;
    scanf("%d",&n);
    char in[n];
    scanf("%s",in);
    while(bad(in,n)<=100)
    {
        int pos = bad(in,n);
        n--;
        for(int i = pos ; i <= n ; i++)
        {
        	in[i] = in[i+1];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%c",in[i]);
    }
    printf("\n");
}