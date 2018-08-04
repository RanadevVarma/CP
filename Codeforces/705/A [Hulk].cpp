#include <iostream>

using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++)
	{
        if(i==n && i%2==1)
        {
        	cout << " I hate it " ; 
        }
        else if(i==n && i%2==0)
        {
        	cout << " I love it " ;
        }
        else if(i%2==0)
        {
            cout << " I love that ";
        }
        else
        {
        	cout << " I hate that ";
        }
	}
}