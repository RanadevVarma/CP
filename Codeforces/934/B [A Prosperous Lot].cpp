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
    int n ;
    cin >> n ;
    if(n>36)
    {
    	cout << "-1" << "\n";
    	return 0;
    }
    int eight = n/2 ;
    for(int i = 1 ; i <= eight ; i++)
    {
    	cout << "8" ;
    }
    if(n%2==1)
    {
    	cout << "9" ;
    }
    cout << "\n";
}