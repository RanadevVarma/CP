#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>

using namespace std ;

int i;
vector <int> dup;

int main()
{
	int n ;
	cin >> n ;
	vector <int> in ;
	for(int i = 0 ; i < n ; i++)
	{
		in.push_back(i+1);
	}
	int a,b ;
	cin >> a >> b ;
	int stage = 1 ;
	while(in.size()>2)
	{
		for(int i = 0 ; i < in.size()-1 ; ++i)
		{
			if(in[i]==a && in[i+1]==b || (in[i]==b && in[i+1]==a))
			{
                cout << stage << "\n";
                return 0 ;
			}
			i++;
		}
		int size = in.size();
		for(int i = 0 ; i < size-1 ; i++)
		{
            if(in[i]!=a && in[i]!=b)
            {
            	dup.push_back(in[i+1]);
            }
            else if(in[i+1]!=a && in[i+1]!=b)
            {
            	dup.push_back(in[i]);
            }
            i++;
		}
		in = dup ;
		dup.clear() ;
		stage++;
	}
	cout << "Final!" << "\n";
}