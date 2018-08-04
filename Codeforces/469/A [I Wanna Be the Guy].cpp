#include <iostream>
#include <algorithm>
#include <cstring>
#include <stdio.h>

using namespace std ;

int temp ;

int main()

{
    int n ;
    cin >> n ;
    int level[n+1] = {0} ;
    int a ;
    cin >> a ;
    for(int i = 0 ; i < a ; i++)
    {
        cin >> temp ;
        level[temp] = 1 ;
    }
    int b ;
    cin >> b ;
    for(int j = 0 ; j < b ; j++)
    {
        cin >> temp ;
        level[temp] = 1 ;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(level[i]==0)
        {
            cout << "Oh, my keyboard!" << "\n" ;
            return 0 ;
        }
    }
    cout << "I become the guy." << "\n" ;
    
}