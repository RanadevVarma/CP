#include <iostream>
#include <cstring>
#include <cmath>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    char in[n][5];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            cin >> in[i][j]; 
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(in[i][0]=='O'&&in[i][1]=='O')
        {
            in[i][0] = '+';
            in[i][1] = '+';
            cout << "YES" << "\n" ;
            for(int a = 0 ; a < n ; a++)
            {
                for(int b = 0 ; b < 5 ; b++)
                {
                    cout << in[a][b] ;
                }
                cout << "\n";
            }
            return 0;
        }
        else if(in[i][3]=='O'&& in[i][4]=='O')
        {
            in[i][3] = '+' ;
            in[i][4] = '+' ;
            cout << "YES" << "\n" ;
            for(int a = 0 ; a < n ; a++)
            {
                for(int b = 0 ; b < 5 ; b++)
                {
                    cout << in[a][b] ;
                }
                cout << "\n";
            }
            return 0;
        }
    }
    cout << "NO" << "\n" ;
}