#include <iostream>
#include <algorithm>

using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int x,y ;
    int x1,y1;
    cin >> x >> y ;
    double slope[n];
    int infi = 0;
    int temp = -1;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x1 >> y1 ;
        if(x1-x == 0)
        {
            infi++;
        }
        else
        {
            temp++;
            slope[temp] = (y1-y)/(double)(x1-x);
        }
    }
    sort(slope,slope+temp+1);
    int ans  = 0;
    for(int i = 0 ; i < temp ; i++)
    {
        if(slope[i]!=slope[i+1])
        {
            ans++;
        }
    }
    if(temp!=-1)
    {
        ans++;
    }
    if(infi==0)
    {
        cout << ans << "\n";
    }
    else
    {
        cout << ans+1 << "\n";
    }
}