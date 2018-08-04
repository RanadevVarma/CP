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
	char s1[6] = "Danil" ;
	char s2[7] = "Olya" ;
	char s3[6] = "Slava" ;
	char s4[4] =  "Ann" ;
	char s5[7] = "Nikita" ;
	char in[102] ;
	cin >> in ;
	int a = 0 , b = 0 , c = 0 , d = 0 ,e = 0;
	for(int i = 0 ; i < strlen(in) ; i++)
	{
		if( i+4<strlen(in) && in[i]=='D' && in[i+1]=='a' && in[i+2]=='n' && in[i+3] == 'i' && in[i+4] == 'l')
		{
			a++;
		}
		if( i+3<strlen(in) && in[i]=='O' && in[i+1]=='l' && in[i+2]=='y' && in[i+3] == 'a')
		{
			b++;
		}
		if( i+4<strlen(in) && in[i]=='S' && in[i+1]=='l' && in[i+2]=='a' && in[i+3] == 'v' && in[i+4] == 'a')
		{
			c++;
		}
		if( i+2<strlen(in) && in[i]=='A' && in[i+1]=='n' && in[i+2]=='n')
		{
			d++;
		}
		if( i+5<strlen(in) && in[i]=='N' && in[i+1]=='i' && in[i+2]=='k' && in[i+3] == 'i' && in[i+4] == 't' && in[i+5]== 'a')
		{
			e++;
		}
	}
	if((a==1 && a+b+c+d+e == 1) || (b==1 && a+b+c+d+e == 1) || (c==1 && a+b+c+d+e == 1) ||(d==1 && a+b+c+d+e == 1) || (e==1 && a+b+c+d+e == 1))
	{ 
		cout << "YES" << "\n" ;
	}
	else
	{
		cout << "NO" << "\n" ;
	}
	return 0;
}