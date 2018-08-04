#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std ;

int least(int a,int b , int c)
{
	if(a<=b && a<=c)
	{
		return a ;
	}
	else if(b<=a && b<=c)
	{
		return b ;
	}
	else
	{
		return c ;
	}
}

int pos1,pos2,pos3 ;

int main()
{
	int n,m,a,b ;
	cin >> n >> m >> a >> b ;
	int nb = (n/m) ;
    pos1 = n*a ;
    pos2 = (nb*b) + (n-(nb*m))*a ;
    pos3 = ((n+m-1)/m)*b ;
    cout << least(pos1,pos2,pos3) << "\n" ;
}