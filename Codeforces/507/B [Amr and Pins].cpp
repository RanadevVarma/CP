#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
	long long int r ;
	long long int x1,y1,x2,y2;
	cin >> r >> x1 >> y1 >> x2 >> y2 ;
    long double dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    long long int one = 2*r ;
    long double ans = dist/(long double)one;
    ans = ceil(ans);
    cout << ans << "\n"; 
} 