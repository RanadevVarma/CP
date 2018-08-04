#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

char in[100007];

int main()
{
	char num1[102],num2[102];
	cin >> num1 >> num2 ;
	if(strcmp(num1,num2)==0)
	{
		cout << num1 << "\n";
	}
	else
	{
		cout << "1" << "\n";
	}
}