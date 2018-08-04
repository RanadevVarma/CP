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
	long long int ans = 0;
	int two,three,five,six ;
	cin >> two >> three >> five >> six ;
	int temp = min(two,five);
	temp = min(temp,six);
	ans = temp*256 ;
	two = two - temp ;
	temp = min(two,three);
	ans = ans + temp*32 ;
	cout << ans << "\n";
}