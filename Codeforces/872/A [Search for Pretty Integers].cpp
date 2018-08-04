#include <iostream>
#include <algorithm>

using namespace std ;

int main()
{
	int a,b ;
	cin >> a >> b ;
	int in1[a] ;
	int in2[b] ;
	for(int i = 0 ; i < a ; i++)
	{
		cin >> in1[i];
	}
	for(int i = 0 ; i < b ; i++)
	{
		cin >> in2[i];
	}
	sort(in1,in1+a);
	sort(in2,in2+b);
	for(int i = 0 ; i < a ; i++)
	{
		for(int j = 0 ; j < b ; j++)
		{
			if(in1[i]==in2[j])
			{
				cout << in1[i] << "\n";
				return 0;
			}
		}
	}
	int pos1 = 10*in1[0] + in2[0];
	int pos2 = 10*in2[0] + in1[0];
	if(pos1<pos2)
	{
		cout << pos1 << "\n" ;
	}
	else
	{
		cout << pos2 << "\n" ;
	}
}