#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std ;

int main()
{
	int n ;
    cin >> n ;
    int bin[10];
    int ans = 0;
    for(int i = 1 ; i <= 1024 ; i++)
    {
        int temp = i;
        for(int j = 0 ; j <= 9 ; j++)
        {
            bin[j] = temp%2 ;
            temp = temp/2 ;
        }
        long long int num = 0 ;
        for(int j = 0 ; j <= 9 ; j++)
        {
            num = num + bin[j]*(pow(10,j));
        }
        if(num<=n && num>0)
        {
            ans++;
        }
    }
    cout << ans << "\n";
}