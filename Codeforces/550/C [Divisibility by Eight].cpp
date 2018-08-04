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
	char in[101];
	cin >> in ;
	int len = strlen(in);
	for(int i = 0 ; i < len ; i++)
	{
		for(int j = i ; j < len ; j++)
		{
			for(int k = j ; k < len ; k++)
			{
				int pos1,pos2,pos3,pos4,pos5,pos6;
				pos1 = in[i]-'0' ;
				pos2 = in[j]-'0' ;
				pos3 = in[k]-'0' ;
				if(i!=j)
				pos4 = (in[i]-'0')*10 + (in[j]-'0');
			    else
			    pos4 = 1 ;
			    if(j!=k)
				pos5 = (in[j]-'0')*10 + (in[k]-'0');
			    else
			    pos5 = 1 ;
			    if(i!=j && j!=k)
				pos6 = (in[i]-'0')*100 + (in[j]-'0')*10 + (in[k]-'0');
			    else
			    pos6 = 1 ;
				if(pos1==0 || pos1==8)
				{
					cout << "YES" <<  "\n" << pos1 << "\n";
					return 0;
				}
				if(pos2==0 || pos2==8)
				{
					cout << "YES" <<  "\n" << pos2 << "\n";
					return 0;
				}
				if(pos3==0 || pos3==8)
				{
					cout << "YES" <<  "\n" << pos3 << "\n";
					return 0;
				}
				if(pos4%8==0 && in[i]!='0')
				{
					cout << "YES" <<  "\n" << pos4 << "\n";
					return 0;
				}
				if(pos5%8==0 && in[j]!='0')
				{
					cout << "YES" <<  "\n" << pos5 << "\n";
					return 0;
				}
				if(pos6%8==0 && in[i]!='0')
				{
					cout << "YES" <<  "\n" << pos6 << "\n";
					return 0;
				}
			}
		}
	}
	cout << "NO" << "\n";
}