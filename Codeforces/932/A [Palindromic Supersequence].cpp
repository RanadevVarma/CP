#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iterator>
#include <stack>
#include <vector>

using namespace std ;

int main()
{
	char in[1009];
	cin >> in ;
	int l = strlen(in);
	for(int i = 0 ; i < l ; i++)
	{
		cout << in[i];
	}
	for(int i = l-1 ; i >= 0 ; i--)
	{
		cout << in[i];
	}
	cout << "\n";
}