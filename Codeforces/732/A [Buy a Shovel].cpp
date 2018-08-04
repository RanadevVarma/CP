#include <iostream>

using namespace std ;

int main()
{
    int k,r ;
    cin >> k >> r ;
    int temp = 0 ; 
    int min = 1 ;
    int cost ;
    while(temp==0)
    {
        cost = min*k;
        if(cost%10==0 || cost%10==r)
        {
            cout << min << "\n";
            return 0;
        }
        else
        {
            min++;
        }
    }
}