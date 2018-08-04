#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

int main()
{
	long long int R,x1,y1,x2,y2 ;
	cin >> R >> x1 >> y1 >> x2 >> y2 ;
	long double dist ;
	dist = (double)pow(x2-x1,2) + (double)pow(y2-y1,2);
	if(dist<0)
	{
		dist = -dist;
	}
	dist = sqrt(dist);
    if(x1==x2 && y1==y2)
    {
    	long double t1,t2 ;
    	t1 = x1+(R/(double)2) ;
    	t2 = y1 ;
    	printf("%.10Lf %.10Lf %.10Lf\n",t1,t2,R/(long double)2);
    }
	else if(dist>=R)
	{
		cout << x1 << " " << y1  << " " << R << "\n";
	}
	else
	{
		long double a1,a2 ;
		long double ans1,ans2 ;
		a1 = (((R+dist)*x1)-((R)*x2))/(double)dist ;
		a2 = (((R+dist)*y1)-((R)*y2))/(double)dist ;
        ans1 = (a1+x2)/(double)2 ;
        ans2 = (a2+y2)/(double)2 ;
        long double adist = (double)pow(ans1-x2,2)+(double)pow(ans2-y2,2);
        adist = sqrt(adist);
        if(adist<0)
        {
        	adist = -adist;
        }
        printf("%.10Lf %.10Lf %.10Lf\n",ans1,ans2,adist);
	}
	return 0;
}