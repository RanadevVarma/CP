#include <iostream>
#include <vector>
#include <cstring>

using namespace std ;

int ans,sum;

int sumdigits(int a)
{
    int lol = 0 ;
    while(a!=0)
    {
        lol = lol + a%10 ;
        a = a/10 ;
    }
    return lol ;
}

int main()
{
    char in[100007] ;
    cin >> in ;
    int len = strlen(in);
    for(int i = 0 ; i < len ; i++)
    {
        sum = sum + (in[i]-'0');
    }
    if(len==1)
    {
        cout << "0" << "\n";
        return 0 ;
    }
    if(sum<=9)
    {
        cout << "1" << "\n";
        return 0 ;
    }
    else
    {
        ans++;
    }
    while(sum>9)
    {
        sum = sumdigits(sum);
        ans++;
    }
    cout << ans  << "\n";
    return 0;
}