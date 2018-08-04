#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std ;

int main()
{
    int a ;
    cin >> a ;
    int boys[a] ;
    for(int i = 0 ; i < a ; i++)
    {
        cin >> boys[i] ;
    }
    int b ;
    cin >> b ;
    int girls[b] ;
    for(int i = 0 ; i < b ; i++)
    {
        cin >> girls[i] ;
    }
    sort(boys,boys+a);
    sort(girls,girls+b);
    int result = 0;
    for(int i = 0 ; i < a ; i++)
    {
        for(int j = 0 ; j < b ; j++)
        {
            if(abs(boys[i]-girls[j])<=1)
            {
                result++;
                girls[j] = 22222 ;
                break;
            }
        }
    }  
    cout << result << "\n" ;
}